RG=0;
AV=0;
start_rgg = evalin("base","start_rgg");
end_rgg=evalin("base","end_rgg");
step = evalin("base","step");
rgg = [start_rgg,end_rgg];
 temp1 = end_rgg - start_rgg;
temp2 = roundn(temp1 /(step-1),-2);%buchang
for i=1:step-2
    rgg = [rgg(1:size(rgg,2)-1),rgg(1)+temp2*i,rgg(end)];%init rgg array;
end
RG=0;
AV=0;%直线加速用TCS跑动，更有优势
time_record = [];%仿真时间记录
soc_record = [];
set_param("SCUTERacing_Model/Visualization/SetForRgg_Block/Set_For_Rgg","commented","off");
for i=1:size(rgg,2)
    set_param("Driveline/Trainsmission/Driveline Input Interface/Motor Gearbox Ratio_L","Gain",num2str(rgg(i)));
    set_param("Driveline/Trainsmission/Driveline Input Interface/Motor Gearbox Ratio_R","Gain",num2str(rgg(i)));
    set_param("TCS/Rgg_R","Value",num2str(rgg(i)));
    set_param("TCS/Rgg_L","Value",num2str(rgg(i)));
    sim("SCUTERacing_Model");
    if(ans.Flag.signals.values(end) ==1)
      pause(inf);
        time_record(1,i) = ans.Rggsimout.time(end);%保存传动比变化时直线加速时长
        soc_record(1,i)=ans.Rggsimout.signals.values(end);%保存传动比变化时直线加速SOC
        pause off;
    end
end
                % grid on;  %直线仿真传动比时长和soc对比图
                % plot(rgg(1:step),temp_record(1:step),'-');
                % title("直线加速75m时长");
                % xlabel("传动比");
                % ylabel("时长");
                % figure();
                % plot(rgg(1:step),soc_record(1:step),'-');
                % title("直线加速75m时长");
                % xlabel("传动比");
                % ylabel("SOC电量");

%之后开始耐久仿真，每个传动比跑动3圈（共3km）,并且采用EF20控制算法模拟赛跑
RG=5;
AV = 3;
set_param("SCUTERacing_Model/Visualization/SetForRgg_Block","commented","on"); %直接把直线加速模块停止的注释掉
set_param("SCUTERacing_Model/Reference Generator/RealRunData/SetForRgg_Block2","commented","off");%耐久停止模块启动
soc_record2=[]; %跑耐久的soc记录.
for i=1:size(rgg,2)
    set_param("Driveline/Trainsmission/Driveline Input Interface/Motor Gearbox Ratio_L","Gain",num2str(rgg(i)));
    set_param("Driveline/Trainsmission/Driveline Input Interface/Motor Gearbox Ratio_R","Gain",num2str(rgg(i)));
    set_param("EF20/Rgg_R","Value",num2str(rgg(i)));
    set_param("EF20/Rgg_L","Value",num2str(rgg(i)));
    sim("SCUTERacing_Model",[0,5000]);
    if(ans.Flag_nj.signals.values(end)==1)
        pause(inf);
        soc_record2(1,i) = ans.Rggsimout.signals.values(end);
        pause(off);
    end
end


%对比传动比不同时的曲线图；
figure;
grid on;
[hAxes,hLine1,hLine2]=pltoyy(rgg(1:step),time_record(1:step),rgg(1:step),soc_record2(1:step),"plot","plot");
set(hLine1,"color",[1 0 0],"LineWidth",2,"Marker","o");
set(hLine2,"color",[0 0 1],"LineWidth",2);
title("传动比rgg与直线加速时长、耐久SOC电量的曲线");
xlabel("传动比");
ylabel(hAxes(1),"Time(s)");
ylabel(hAxes(2),"SOC(%)");
