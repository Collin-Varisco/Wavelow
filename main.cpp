#include "stretchplay.h"
#include <QtGui>
#include <QFrame>
#include <QApplication>
int main(int argc, char *argv[]){
	QApplication app(argc, argv);
	StretchPlay stretchPlay;
	stretchPlay.show();
	app.exec();
}
