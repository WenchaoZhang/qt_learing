#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDial>
#include <QDebug>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_dial_sliderMoved(int position)      //这个函数直接点到某一个值就会不起作用
{
    qDebug() << position << endl;
   // ui->horizontalScrollBar->setValue(position);
    //ui->horizontalSlider->setValue(position);
    //ui->spinBox->setValue(position);
    //ui->verticalScrollBar->setValue(position);
    //ui->verticalSlider->setValue(position);
}

void MyWidget::on_dial_valueChanged(int value)  //这个都会起作用
{
    qDebug() << value << endl;
    ui->horizontalScrollBar->setValue(value);
    ui->horizontalSlider->setValue(value);
    ui->spinBox->setValue(value);
    ui->verticalScrollBar->setValue(value);
    ui->verticalSlider->setValue(value);
}


void MyWidget::on_horizontalScrollBar_valueChanged(int value)
{
    ui->dial->setValue(value);
    ui->horizontalSlider->setValue(value);
    ui->spinBox->setValue(value);
    ui->verticalScrollBar->setValue(value);
    ui->verticalSlider->setValue(value);
}
