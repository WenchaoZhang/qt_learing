#include "widget.h"
#include <QApplication>
#include <QLabel>
#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QPalette>
#include <QPixmap>
#include <QDebug>
#include <QCheckBox>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget mywidget;
    mywidget.resize(400,200);

    mywidget.setStyleSheet("border-color:rgb(1,0,0)");

    mywidget.setWindowTitle("登陆界面");
    QPalette pt(mywidget.palette());
    pt.setColor(QPalette::Background,QColor(70,70,70));

    //设置图片
    QPixmap *img = new QPixmap("C:/Users/admin/Desktop/qt  project/catch.PNG");
    QLabel lb1;
    *img = img->scaled(mywidget.size()/2,Qt::KeepAspectRatio);
    lb1.setPixmap(*img);

    //初始化布局
    QGridLayout *gl = new QGridLayout;
    gl->setSpacing(10);
    gl->addWidget(&lb1,0,0,3,3);

    //做行编辑器
    QLineEdit *le1 = new QLineEdit;
    QLineEdit *le2 = new QLineEdit;
    le1->setPlaceholderText(QStringLiteral("QQ号/邮箱/手机号登陆"));
    le1->setStyleSheet("border-radius:2px;border:1px solid rgb(48,153,216)");
    le1->setMinimumHeight(23);
    le2->setPlaceholderText(QStringLiteral("QQ密码"));
    le2->setStyleSheet("border-radius:2px;border:1px solid rgb(48,153,216)");
    le2->setMinimumHeight(23);
    gl->addWidget(le1,0,3,1,3);
    gl->addWidget(le2,1,3,1,3);

    //做复选框
    QCheckBox ck1("记住密码");
    QCheckBox ck2("自动登录");
    ck1.setStyleSheet("color:rgb(255,255,255)");
    ck2.setStyleSheet("color:rgb(255,255,255)");

    gl->addWidget(&ck1,2,3,1,1);
    gl->addWidget(&ck2,2,5,1,1);

    //做按键
    QPushButton *bnt1 = new QPushButton("登陆");
    bnt1->setStyleSheet("color: rgb(255,255,255);background-color: rgb(48,153,216);border-radius:3px");
    bnt1->setMinimumHeight(30);
    bnt1->setFlat(true);
    gl->addWidget(bnt1,3,3,1,3);

    QPushButton *bnt2 = new QPushButton("注册账号");
    bnt2->setFlat(true);
    bnt2->setStyleSheet("color: rgb(48,153,216)");
    gl->addWidget(bnt2,0,6,1,2);

    QPushButton *bnt3 = new QPushButton("忘记密码");
    bnt3->setStyleSheet("color:rgb(48,153,216)");
    bnt3->setFlat(true);
    gl->addWidget(bnt3,1,6,1,2);


    qDebug() << lb1.size() << endl;
    qDebug() << mywidget.size() << endl;

    mywidget.setLayout(gl);
    mywidget.setPalette(pt);


    mywidget.show();

    return a.exec();
}
