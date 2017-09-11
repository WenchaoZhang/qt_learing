#include <QApplication>
#include <helloword.h>

int main(int argc ,char *argv[])
{
    QApplication a(argc, argv);
    Dialog hdlg;
    hdlg.show();
    return a.exec();
}
