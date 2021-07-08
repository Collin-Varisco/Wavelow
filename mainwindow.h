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
private:
  QWidget *window;
  QPushButton *playButton;
  QPushButton *pauseButton;
  QPushButton *selectionButton;
  QPushButton *shuffleButton;
  QGridLayout *layout;
};
#endif // MAINWINDOW_H
