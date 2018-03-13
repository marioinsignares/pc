@echo off
set cfg=- Win32 Release
set prog=%1
nmake /f pro20.mak
rem if "%2" == "" set cfg=- Win32 Release

