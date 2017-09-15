#include <QApplication>
#include "mywidget.h"
#include <QTextCodec> //添加头文件
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyWidget w;
    w.show();

    return a.exec();
}
