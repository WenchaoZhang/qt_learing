#include <QApplication>
#include <mywidget.h>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyWidget w;


    //label2.show();
    w.show();
    return a.exec();
}
