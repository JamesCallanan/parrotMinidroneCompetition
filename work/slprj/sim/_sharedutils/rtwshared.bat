@echo off
set MATLAB=C:\Program Files\MATLAB\R2019b
"%MATLAB%\bin\win64\gmake" -f rtwshared.mk  GENERATE_ASAP2=0 TMW_EXTMODE_TESTING=0 OPTS="-DMATLAB_MEX_FILE"
