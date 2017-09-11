#include "ui_dialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);                                //生成一个程序
    QDialog dlg;
    Ui::Dialog ui;
    ui.setupUi(&dlg);
    dlg.show();
    return a.exec();                                            //程序开始执行
}
