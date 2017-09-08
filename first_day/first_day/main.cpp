#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QFont.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);                                //生成一个程序
    MainWindow w;                                              //声明一个窗体对象

    QLabel *label = new QLabel(&w);                            //初始化一个标签对象
    QFont label_font;                                          //生成字体
    label_font.setPointSize(16);                               //字体属性：字体大小设为16
    label ->setFont(label_font);                               //设置标签的字体属性
   // label ->setText("一去两三里，烟村四五家，亭台六七座，八九十枝花");
    label ->setText("Hellow word");                            //设置标签内部显示汉字的内容
    label ->setGeometry(20,20,150,30);                         //设置标签位置
    label ->setFrameStyle(QFrame::Panel | QFrame::Sunken);     //设置标签外观
    label ->setStyleSheet("color:blue");                       //设置标签内部字体颜色
 //   label->show();
    w.resize(200,100);
    w.setWindowTitle("qt learn first day");                     //设置窗口的title
    w.show();                                                   //窗口显示
    return a.exec();                                            //程序开始执行
}
