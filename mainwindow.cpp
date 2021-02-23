#include "mainwindow.h"


MainWindow::MainWindow()
/*  :chartArea(new ChartArea),
    funcBox(new QComboBox),
    funcBoxLabel(new QLabel(tr("&Functions")))*/
{
  chartArea = new ChartArea;
  funcBox = new QComboBox;
  funcBoxLabel = new QLabel(tr("&Functions"));

  funcBox->addItem(tr("f(x) = A*(x*x) + B*x + C"), ChartArea::squareFunc);
  funcBox->addItem(tr("f(x) = A * sin(x) + B * cos( C*x )"), ChartArea::SinCosFunc);
  funcBox->addItem(tr("f(x) = A*log( B*x )"), ChartArea::LogFunc);
  funcBox->addItem(tr("f(x) = A / ( sin(x*x) * B )"), ChartArea::RevSinFunc);

  funcBoxLabel->setBuddy(funcBox);

  QVBoxLayout * mainLayout = new QVBoxLayout;

  mainLayout->addWidget(chartArea);
  mainLayout->addWidget(funcBox);
  setLayout(mainLayout);
  setWindowTitle("Chart Drawing");

}


void MainWindow::changeStartBtn()
{

}

void MainWindow::changeStopBtn()
{

}

void MainWindow::changePauseBtn()
{

}

