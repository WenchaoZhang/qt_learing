#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget widget;
    int x = widget.x();                //返回窗口的位置信息
    int y = widget.y();                //返回窗口的位置信息
    QRect geometry = widget.geometry();      //返回窗口的位置信息和大小信息
    QRect frame = widget.frameGeometry();    //同上
    return a.exec();
}

//调试测试：在这里学会调试
//去查阅相关信息
