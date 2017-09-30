#include "ballcontrol.h"
#include "ui_ballcontrol.h"
#include <qDebug>

BallControl::BallControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BallControl)
{
    ui->setupUi(this);
}

BallControl::~BallControl()
{
    delete ui;
}

void BallControl::on_dial_valueChanged(int value)
{
    ui->spinBox->setValue(value);
    qDebug() << value;
}

void BallControl::on_spinBox_valueChanged(int arg1)
{
    ui->dial->setValue(arg1);
    qDebug() << arg1;
}
