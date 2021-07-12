#include "wave.h"
#include <QtGui>
#include <QFrame>
#include <QApplication>
int main(int argc, char *argv[]){
	QApplication app(argc, argv);
	wave w;
	w.show();
	app.exec();
}
