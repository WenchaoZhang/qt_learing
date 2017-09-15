#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>
#include <QMenu>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("我的窗口"));
    ui->pushBtn1->setText(tr("安检仪(&A)"));
    ui->pushBtn2->setText(tr("帮助(&H)"));
    ui->pushBtn2->setIcon(QIcon("C:/Users/admin/Desktop/qt  project/help.png"));
    ui->pushBtn3->setText(tr("z&oom"));
    QMenu *menu = new QMenu(this);
    menu->addAction(QIcon("C:/Users/admin/Desktop/qt  project/zoom-in.png"),tr("放大"));
    ui->pushBtn3->setMenu(menu);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushBtn1_toggled(bool checked)
{

    qDebug()  << "按钮是否按下" << endl;
}
