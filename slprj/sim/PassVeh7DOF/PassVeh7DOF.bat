@echo off
set "VSCMD_START_DIR=%CD%"
call "D:\vs2019\VC\Auxiliary\Build\VCVARSALL.BAT " amd64

cd .
nmake -f PassVeh7DOF.mk  GENERATE_ERT_S_FUNCTION=0 GENERATE_ASAP2=0 EXTMODE_STATIC_ALLOC=0 EXTMODE_STATIC_ALLOC_SIZE=1000000 EXTMODE_TRANSPORT=0 TMW_EXTMODE_TESTING=0 OPTS="-DMATLAB_MEX_FILE -DTID01EQ=0"
@if errorlevel 1 goto error_exit
exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1
