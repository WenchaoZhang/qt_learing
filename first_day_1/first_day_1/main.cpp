#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);                                //生成一个程序
    QDialog dlg;
    dlg.resize(400,400);
    dlg.move(100,300);
    QLabel label(&dlg);
    label.move(120,120);
    label.setText("hello word ! 你好");
    dlg.show();
    return a.exec();                                            //程序开始执行
}
