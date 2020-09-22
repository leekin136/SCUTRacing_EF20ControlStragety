speed_hu=xlsread('胡总耐久.xls','Endurance_Race_HuZong_Scut_ERac','GD2:GD10000');
time_hu=xlsread('胡总耐久.xls','Endurance_Race_HuZong_Scut_ERac','C2:C10000');
i=1;
while(i<size(time_hu,1))
    if(~isnan(time_hu(i,1)))
        time_hu_r(i,1)=time_hu(i,1);
        i=i+1;
    else
        break;
    end
end
rundata=[time_hu_r,speed_hu];
                        % plot(time_hu_r,speed_hu,'-');
                        % title("耐久跑动数据-10圈");
                        % xlabel("时间/s");
                        % ylabel("速度km/s");
GPS_Lng = xlsread('胡总耐久.xls','Endurance_Race_HuZong_Scut_ERac','GO2:GO10000');
GPS_Ltrl = xlsread('胡总耐久.xls','Endurance_Race_HuZong_Scut_ERac','GN2:GN10000');
GPS_Lng=roundn(GPS_Lng,-4);
GPS_Ltrl = roundn(GPS_Ltrl,-4);
                        % plot(GPS_Ltrl,GPS_Lng,'-');
                        % title("赛车跑动GPS图");
                        % xlabel("GPS经度");
                        % ylabel("GPS纬度");
                        % plot(1:size(GPS_Lng,1),GPS_Lng,'-');
temp_Lng=GPS_Lng(1,1);
temp_Ltrl = GPS_Ltrl(1,1);
j=0;
tempmatic=[];
for i=1:size(GPS_Lng,1)
    if(GPS_Lng(i,1) ==temp_Lng )
        if(GPS_Lng(i+1,1) ~= temp_Lng)
           
            j=j+1;
            tempmatic(1,j) = i;
        end
    end
end
p=1;j=1;i=1;
roundstarttime(1,1)=tempmatic(1,1);
while(p<size(tempmatic,2))
   if(tempmatic(1,p)-tempmatic(1,j)>600)
        roundstarttime(i,1)=tempmatic(1,p);
        j=p;
        i=i+1;
    
   end
   p=p+1;
    if(size(roundstarttime,1)>10)
        break;
    end
end

%下面这个程序单独运行，因为计算出了十圈开始的时间，所以要代进去,耐久测试采用耐久的第一圈、第五圈、第十圈作为代表数据
figure
i=1;
for j=roundstarttime(1,1):roundstarttime(2,1)
    xdotref(i,1)=speed_hu(j,1);
    i=i+1;
end
subplot(1,3,1);
plot(1:size(xdotref,1),xdotref(1:end),'-');
title("第一圈跑动");
xlabel("跑动时长");
ylabel("跑动速度");
flag=i-1;
for j=roundstarttime(4,1):roundstarttime(5,1)
    xdotref(i,1)=speed_hu(j,1);
    i=i+1;
end
subplot(1,3,2);
plot(1:(size(xdotref,1)-flag),xdotref(flag+1:end,1),'-');
title("第四圈跑动");
xlabel("跑动时长");
ylabel("跑动速度");
flag=i-1;
for j=roundstarttime(9,1):roundstarttime(10,1)
    xdotref(i,1)=speed_hu(j,1);
    i=i+1;
end
subplot(1,3,3);
plot(1:(size(xdotref,1)-flag),xdotref(flag+1:end,1),'-');
title("第十圈跑动");
xlabel("跑动时长");
ylabel("跑动速度");
xdotref=[(1:size(xdotref,1))',xdotref];