#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QComboBox>
#include <QtWidgets>
#include <QGridLayout>
#include <QListView>
#include <QApplication>

#include "chartarea.h"

class MainWindow : public QWidget
{
  Q_OBJECT

public:
  MainWindow();

private slots:
  void changeStartBtn();
  void changeStopBtn();
  void changePauseBtn();


private:
  ChartArea* chartArea;
  QComboBox* funcBox;
  QLabel* funcBoxLabel;
/*QLabel* m_start;
  QLabel* m_stop;
  QLabel* m_pause;
  QString startLabel = "Start";
  QString stopLabel = "Stop";
  QString pauseLabel = "Pause";
  QPushButton* startBtn;
  QPushButton* stopBtn;
  QPushButton* pauseBtn;
  double m_X;
  double m_Y;
  double m_parA;
  double m_parB;
  double m_parC;
  double m_from;
  double m_to;
  double m_step;
  int numberOfPoints = (m_to-m_from)/m_step;
  int m_func;*/
};

#endif // MAINWINDOW_H
