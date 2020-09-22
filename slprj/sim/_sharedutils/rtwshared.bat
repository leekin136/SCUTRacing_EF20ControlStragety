@echo off
set "VSCMD_START_DIR=%CD%"
call "D:\vs2019\VC\Auxiliary\Build\VCVARSALL.BAT " amd64

cd .
nmake -f rtwshared.mk  GENERATE_ASAP2=0 TMW_EXTMODE_TESTING=0 OPTS="-DNRT"
@if errorlevel 1 goto error_exit
exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1
