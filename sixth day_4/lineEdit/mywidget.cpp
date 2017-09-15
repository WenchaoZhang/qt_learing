#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>
//#include <QValidator>
#include <QCompleter>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    this->setWindowTitle("我的窗口-实验行编辑器");

    QValidator *vd = new QIntValidator(0000,1999,this);  //确定一个整数的输入范围
    ui->lineEdit_3->setValidator(vd);                    //设置一个验证的范围

    QStringList wordList;                                 //自动补全的清单
    wordList << "Qt" << "Qt Creator" << tr("你好");

    // 新建自动完成器
    QCompleter *completer = new QCompleter(wordList, this);

    // 设置大小写不敏感
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->lineEdit_4->setCompleter(completer);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_lineEdit_2_returnPressed()
{
    ui->lineEdit_3->setFocus();                         //光标移动到第三行
    qDebug() << ui->lineEdit_2->text() << endl;         //显示输入的字符
    qDebug() << ui->lineEdit_2->displayText() << endl;  //显示全部的字符
}


void MyWidget::on_lineEdit_3_returnPressed()
{
    ui->lineEdit_4->setFocus();
    qDebug() << ui->lineEdit_3->text() << endl;
}
