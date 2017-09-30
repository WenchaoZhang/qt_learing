#ifndef BARCONTROL_H
#define BARCONTROL_H

#include <QWidget>

namespace Ui {
class BarControl;
}

class BarControl : public QWidget
{
    Q_OBJECT

public:
    explicit BarControl(QWidget *parent = 0);
    ~BarControl();

private slots:
    void on_horizontalSlider_2_valueChanged(int value);

    void on_spinBox_valueChanged(int arg1);

private:
    Ui::BarControl *ui;
};

#endif // BARCONTROL_H
