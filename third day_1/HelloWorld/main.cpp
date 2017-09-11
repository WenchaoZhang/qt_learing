#include <QApplication>
#include "hellodialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HelloDialog hdlg;
    hdlg.show();
    return a.exec();
}
