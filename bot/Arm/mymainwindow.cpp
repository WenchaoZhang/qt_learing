#include "mymainwindow.h"
#include "ui_mymainwindow.h"

MyMainWindow::MyMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("Arm2.0机械臂"));

    sl = new QStackedLayout(ui->mian_part_widget1);
    sl_left = new QStackedLayout(ui->widget_left);

    cw = new ControlWidget(this);
    sw = new SerialWidget(this);
    ow = new OpencvWidget(this);

    bc = new BallControl(this);
    barc = new BarControl(this);

    sl->addWidget(cw);
    sl->addWidget(sw);
    sl->addWidget(ow);
    sl_left->addWidget(bc);
    sl_left->addWidget(barc);
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}

void MyMainWindow::on_pushButton_clicked()
{
    sl->setCurrentWidget(sw);
    //ui->mian_part_widget1->close();
}

void MyMainWindow::on_pushButton_3_clicked()
{
    sl->setCurrentWidget(cw);
}

void MyMainWindow::on_pushButton_4_clicked()
{
    sl_left->setCurrentWidget(bc);
}

void MyMainWindow::on_pushButton_5_clicked()
{
    sl_left->setCurrentWidget(barc);
}

void MyMainWindow::on_pushButton_2_clicked()
{
    sl->setCurrentWidget(ow);
}
