#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QtWidgets>
#include <QDebug>
#include <QGridLayout>
#include <irrKlang.h>
#include <QFileDialog>
#include <QDir>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <QLabel>
using namespace irrklang;


namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT
public:
  explicit MainWindow(QWidget *parent = nullptr);
private slots:
  void getMusicDirectory();
  void shuffleSong();
  void play();
  void speedUp();
  void slowDown();
private:
  QWidget *window;
  QLabel *speed;
  QPushButton *playButton;
  QPushButton *pauseButton;
  QPushButton *selectionButton;
  QPushButton *shuffleButton;
  QPushButton *faster;
  QPushButton *slower;
  QGridLayout *layout;
};
#endif // MAINWINDOW_H
