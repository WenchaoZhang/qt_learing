#include "barcontrol.h"
#include "ui_barcontrol.h"

BarControl::BarControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BarControl)
{
    ui->setupUi(this);
}

BarControl::~BarControl()
{
    delete ui;
}

void BarControl::on_horizontalSlider_2_valueChanged(int value)
{
    ui->spinBox->setValue(value);
}

void BarControl::on_spinBox_valueChanged(int arg1)
{
    ui->horizontalSlider_2->setValue(arg1);
}
