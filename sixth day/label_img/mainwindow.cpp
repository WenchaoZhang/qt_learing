#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this ->setWindowTitle("我的窗口");
    this->resize(800,900);

    QLabel *mylabel = new QLabel(this);
    mylabel->resize(470,470);
  //  mylabel->setScaledContents(true);                //只用这个函数可以实现图片的自适应，但是会填充到整个画面（all apace）

    QPixmap *img = new QPixmap("C:/Users/admin/Desktop/qt  project/peple.JPEG");
    //QImage *img = new QImage("C:/Users/admin/Desktop/qt  project/peple.JPEG");
   // QSize sz(470,470);    //尺寸对象


    *img = img->scaled(mylabel->size(),Qt::KeepAspectRatio);  //KeepAspectRatio：保持长宽比缩放图片
    //注意：这个图片一定要有个img去承接，就是等号的左边

    mylabel->setPixmap(*img);    //设置图片到label里
   // mylabel->move(100,100);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//注意;按照此思想，可以实现label随着窗口的变化而而变化
