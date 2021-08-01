install_name_tool -change /usr/local/opt/qt/lib/QtWidgets.framework/Versions/A/QtWidgets
install_name_tool -change /usr/local/opt/qt/lib/QtGui.framework/Versions/A/QtGui
install_name_tool -change /usr/local/opt/qt/lib/QtCore.framework/Versions/A/QtCore

install_name_tool -change /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
install_name_tool -change /System/Library/Frameworks/Metal.framework/Versions/A/Metal
install_name_tool -change /System/Library/Frameworks/IOKit.frameworks/Versions/A/IOKit
install_name_tool -change /System/Library/Frameworks/OpenGL.framework/Versions/A/OpenGL
install_name_tool -change /System/Library/Frameworks/AGL.framework/Versions/A/AGL
