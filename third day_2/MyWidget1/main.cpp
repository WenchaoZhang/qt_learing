#include <QtGui>
#include <QApplication>
#include <QWidget>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    QWidget *widget = new QWidget();

    widget -> setWindowTitle(QObject::tr("我是widget"));
    widget -> resize(600,600);

    QLabel *label = new QLabel();
    label -> setWindowTitle(QObject::tr("我是label"));
    label -> setText(QObject::tr("label::我是一个窗口"));
    label ->resize(180,20);
    QLabel *label2 = new QLabel(widget);
    label2 -> setText(QObject::tr("我不是一个窗口，我是label，是widget的子窗口"));
    label2 -> resize(300,20);
    label2 -> move(200,200);
    label ->show();
    widget -> show();
    int ret = a.exec();
    delete label;
    delete widget;
    return ret;
}
