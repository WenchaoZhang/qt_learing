#include <QApplication>
#include "mywidget.h"
#include "mydialog.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);                    //生成一个程序
    myWidget w;
    myDialog dialog;                               //新建MyDialog类对象
    if(dialog.exec() == QDialog::Accepted){        //判断dialog执行结果
        w.show();         //如果是按下了“进入主界面”按钮，则显示主界面
        return a.exec(); //程序正常运行
    }
    else return 0;   //否则，退出程序
}
