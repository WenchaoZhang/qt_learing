#ifndef OPENCVWIDGET_H
#define OPENCVWIDGET_H

#include <QWidget>

namespace Ui {
class OpencvWidget;
}

class OpencvWidget : public QWidget
{
    Q_OBJECT

public:
    explicit OpencvWidget(QWidget *parent = 0);
    ~OpencvWidget();

private:
    Ui::OpencvWidget *ui;
};

#endif // OPENCVWIDGET_H
