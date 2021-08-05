Linux \
1.) $ git clone https://github.com/collin-varisco/Wave-Stretch.git \
2.) $ cd Wave-Stretch \
3.) $ sudo bash linux-install.sh \
4.) launch from terminal or launcher with \
    $ wavelow \
    Executable binary is located at ~/.local/bin \

MAC \
1.) $ git clone https://github.com/collin-varisco/Wave-Stretch.git \
2.) $ cd Wave-Stretch \
3.) $ sudo bash mac-install.sh \
4.) $ launch from terminal with \
    $ wavelow \
    .app file is located at ~/.local/bin 

Windows \
To run already compiled .exe for x64 \
1.) Download this repository \
2.) Open Wave-Stretch folder \
3.) Open Windows-Full-Build folder \ 
4.) Run wavelow.exe in that folder or make a shortcut of that .exe to place anywhere and run.

To Build Wavelow on Windows \
1.) Install Visual Studio \
2.) Install Qt on windows. (qt-opensource-windows-x86-5.13.2 worked for me) \
3.) Download Repositiory \
4.) Open repository folder \
5.) Open windows folder and run .sln file with Visual Studio. \
6.) Go to Extensions->Qt VS Tools->Qt Versions \
7.) Dialog will come up where you need to press <add new Qt version> \
8.) Press folder Icon to the right to use a file dialog to locate the qmake file in the compiler that is right for your machine. \
9.) I set mine to C:\Qt\Qt5.13.2\5.13.2\msvc2017_64 \
10.) When compiling for x64, Make sure the build Solution Configuration platform is set to Debug and the Solution Platforms is set to x64 \
11.) Build the debug version by pressing the button with the green arrow. Once the application runs close it and visual studio. \
12.) Edit your environment variables by adding a new System variable called "QtDir" with a value of the path to the bin folder of the \
     same compiler folder used earlier C:\Qt\Qt5.13.2\5.13.2\msvc2017_64\bin \
13.) In the Wave-Stretch\windows folder, double click the RunAfterBuild.bat file. \
14.) Run the Wavelow.exe file from the Wave-Stretch\windows\x64\Debug folder or make a shortcut of the exe and run that.

