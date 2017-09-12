#include <QApplication>
#include <QWidget>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget widget;
    widget.resize(300,400);
    widget.move(200,200);
    widget.show();

    int x = widget.x();                //返回窗口的位置信息
    qDebug("x: %d",x);
    int y = widget.y();                //返回窗口的位置信息
    qDebug("y: %d");

    QRect geometry = widget.geometry();      //返回窗口的位置信息和大小信息
    QRect frame = widget.frameGeometry();    //同上
    qDebug() << "geometry: " << geometry << "fram: " << frame;
    return a.exec();
}

//调试测试：在这里学会调试
//去查阅相关信息
