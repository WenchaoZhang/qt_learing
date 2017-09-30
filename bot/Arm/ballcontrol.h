#ifndef BALLCONTROL_H
#define BALLCONTROL_H

#include <QWidget>

namespace Ui {
class BallControl;
}

class BallControl : public QWidget
{
    Q_OBJECT

public:
    explicit BallControl(QWidget *parent = 0);
    ~BallControl();

private slots:
    void on_dial_valueChanged(int value);

    void on_spinBox_valueChanged(int arg1);

private:
    Ui::BallControl *ui;
};

#endif // BALLCONTROL_H
