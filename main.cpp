#include "stretchplay.h"
#include <QApplication>
#include <QFrame>
int main(int argc, char *argv[]){
	QApplication app(argc, argv);
	QFrame *display = new QFrame;
	Ui::PlaybackDisplay u;
	u.setupUi(display);
	display->show();
	app.exec();
}
