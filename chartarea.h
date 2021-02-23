#ifndef CHARTAREA_H
#define CHARTAREA_H

#include <QWidget>
#include <QComboBox>
#include <QtWidgets>
#include <QGridLayout>
#include <QListView>

class ChartArea : public QWidget
{

  Q_OBJECT

public:
  enum Function {squareFunc, SinCosFunc, LogFunc, RevSinFunc};

  explicit ChartArea(QWidget* parent = nullptr);

  QSize minimumSizeHint() const override;
  QSize sizeHint() const override;

public slots:
  void setFunc(Function func);
  void startDraw();
  void stopDraw();
  void pauseDraw();

protected:
  void paintEvent(QPaintEvent* event) override;

private:
  Function func;
};

#endif // CHARTAREA_H
