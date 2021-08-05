#Linux \
1.) Install qt5 for your distribution. \
2.) '$ git clone https://github.com/collin-varisco/Wavelow.git' \
3.) $ cd Wavelow \
4.) $ bash linux-install.sh \
5.) launch from terminal or launcher with \
    $ wavelow \
    Executable binary is located in directory ~/.local/bin/wavelow \
    You can make a shortcut of this binary if you want to launch it from \
    somewhere else.

#MAC \
1.) Install Homebrew: /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)" \
2.) brew install qt \
3.) $ git clone https://github.com/collin-varisco/Wavelow.git \
4.) $ cd Wavelow \
5.) $ bash mac.sh \
6.) $ launch wavelow.app from Wavelow directory or copy wavelow.app to somewhere else like your dock and launch it. 

# Windows 
To run already compiled .exe for x64 \
1.) $ git clone https://github.com/collin-varisco/Wavelow.git \
2.) Open cloned Wavelow folder \
3.) Open Windows-Full-Build folder \ 
4.) Run wavelow.exe in that folder or make a shortcut of that .exe to place anywhere and run. You can rename the Windows-Full-Build folder and copy it to C:\Program Files (x86)\ if you want to delete everything else.

###To Build Wavelow on Windows \
1.) Install Visual Studio and install the "Qt VS Tools" add on \
2.) Install Qt5 on windows. (qt-opensource-windows-x86-5.13.2 worked for me) \
3.) $ git clone https://github.com/collin-varisco/Wavelow.git \
4.) Open cloned Wavelow folder \
5.) Open windows folder and run .sln file with Visual Studio. \
6.) In Visual Studio, go to Extensions->Qt VS Tools->Qt Versions \
7.) A dialog will pop up. You need to press <add new Qt version> \
8.) Press folder Icon to the right to use a file dialog to locate the qmake file in the compiler directory that will work with your machine. \
For example, I set mine to C:\Qt\Qt5.13.2\5.13.2\msvc2017_64 \
10.) When compiling for x64, Make sure the build Solution Configuration platform dropdown menu is set to Debug and the Solution Platforms dropdown menu is set to x64 \
11.) Build the debug version by pressing the build button. Once the application runs, close Wavelow and Visual Studio. \
12.) Edit your environment variables by adding a new System variable called "QtDir" with a value of the path to the bin folder from the \
     same compiler directory used earlier C:\Qt\Qt5.13.2\5.13.2\msvc2017_64\bin \
13.) In the Wavelow\windows folder, double click the RunAfterBuild.bat file. \
14.) Run the Wavelow.exe file from the Wavelow\windows\x64\Debug folder or make a shortcut of the .exe file and run that. You can rename the debug folder and add it to C:\Program files (x86)\ if you want to delete everything else. 

![Mac](https://raw.githubusercontent.com/Collin-Varisco/Wavelow/main/screenshots/mac-screenshot.png?token=AQZQLWZFGF6GJ4LV4GTPO5TBCS44U)
