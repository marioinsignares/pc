@echo off
set cfg=- Win32 Release
set prog=%1
nmake /f pro22.mak
rem if "%2" == "" set cfg=- Win32 Release

