#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("我的窗口");
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime()); //获取系统时间

    qDebug() << ui->spinBox <<endl;
    qDebug() << ui->doubleSpinBox <<endl;
    qDebug() << ui->dateTimeEdit << endl;

}

Widget::~Widget()
{
    delete ui;
}

void Widget::getSysTime()  //无用函数
{
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime()); //获取系统时间
}

void Widget::on_pushButton_clicked()
{
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime()); //获取系统时间
    qDebug() << "获取时间" << endl;
}
