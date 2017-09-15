#include "mywidget.h"
#include "ui_mywidget.h"
#include <QLabel>
#include <QPixmap>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    this->resize(800,800);

    this->setWindowTitle("hello qt!");
    QLabel *label2 = new QLabel(this);
    label2->setPixmap(QPixmap("C:/Users/admin/Desktop/logo.png"));
    label2 -> resize(100,100);
    label2->move(100,100);
   // free(label2);                 //释放掉指针这一部分的堆空间，用这个会让程序运行中直接崩溃掉
    //label2->~QLabel();             //调用析构函数释放空间是可行的

}

MyWidget::~MyWidget()
{
    delete ui;
}
