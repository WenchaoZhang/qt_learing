#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();

private slots:
    void on_dial_sliderMoved(int position);

    void on_dial_valueChanged(int value);

    void on_horizontalScrollBar_valueChanged(int value);

private:
    Ui::MyWidget *ui;
};

#endif // MYWIDGET_H
