#ifndef SERIALWIDGET_H
#define SERIALWIDGET_H

#include <QWidget>

namespace Ui {
class SerialWidget;
}

class SerialWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SerialWidget(QWidget *parent = 0);
    ~SerialWidget();

private:
    Ui::SerialWidget *ui;
};

#endif // SERIALWIDGET_H
