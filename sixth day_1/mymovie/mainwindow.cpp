#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMovie>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("我的窗口");
    this->resize(800,800);                     //设置这个主窗口的大小
    QLabel *lb = new QLabel(this);             //新建一个标签的指针
    lb->resize(300,100);                       //设置这个标签的大小
    lb->setScaledContents(true);               //设置标签里面的包含的动画或图片自适应全充满该标签的所有空间
    QMovie *mv = new QMovie("C:\\Users\\admin\\Desktop\\donghua.gif"); //新建一个动画的对象
   // *mv = mv->scaledSize(lb->size(),Qt::KeepAspectRatio);  //动画播放没有这个方法
    lb->setMovie(mv);                            //把该对象放到标签里
    lb->move(100,100);
    //ui ->label->setMovie(mv);              //另一种方案，在ui界面里你自己拖出一个label的标签对象
    mv->start();                                //开始播放
}

MainWindow::~MainWindow()                    //析构函数
{
    delete ui;
}
