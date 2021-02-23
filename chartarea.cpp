#include "chartarea.h"

ChartArea::ChartArea(QWidget* parent)
  : QWidget(parent)
{
  Function squareFunc;

  setBackgroundRole(QPalette::Base);
  setAutoFillBackground(true);

}


QSize ChartArea::minimumSizeHint() const
{
  return QSize(100, 100);
}

QSize ChartArea::sizeHint() const
{
  return QSize(400, 200);
}

void ChartArea::setFunc(Function func)
{
  this->func = func;
  update();
}

void ChartArea::startDraw()
{

}

void ChartArea::stopDraw()
{

}

void ChartArea::pauseDraw()
{

}

void ChartArea::paintEvent(QPaintEvent * /*event*/)
{
  static const QPoint points[4] = {
      QPoint(10, 80),
      QPoint(20, 10),
      QPoint(80, 30),
      QPoint(90, 70)
  };

  QRect rect(10, 20, 80, 60);

  QPainterPath path;
  path.moveTo(20, 80);
  path.lineTo(20, 30);
  path.cubicTo(80, 0, 50, 50, 80, 80);


  QPainter painter(this);


  painter.drawRect(QRect(0, 0, width() - 1, height() - 1));

}
