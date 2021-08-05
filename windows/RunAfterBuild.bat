@echo off
copy ..\libs\irrKlang-64bit-1.6.0\bin\winx64-visualStudio\irrKlang.dll x64\Debug
copy ..\libs\irrKlang-64bit-1.6.0\bin\winx64-visualStudio\ikpMP3.dll x64\Debug
cd x64\Debug
rename "windows.exe" "Wavelow.exe"
windeployqt Wavelow.exe