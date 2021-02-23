#include <iostream>
#include "mainwindow.h"

using namespace std;

int main(int argc, char** argv)
{
  QApplication app(argc, argv);
  QWidget* m = new MainWindow();
  m->show();
  return app.exec();
}
