#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include "dialog.h"
//#include "ui_dialog.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui -> showChildButton, SIGNAL(clicked()), this, SLOT(showChildDialog()));
    QDialog dialog(this);
    dialog.exec();             //模态对话框，用show来显示的话，是非模态对话框。
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showChildDialog()
{
    close();          //关闭主窗口

    Dialog1 *dg = new Dialog1();
    //Ui1::Dialog1 *dg;
    //dg = new Ui1::Dialog1();
    dg->show();
}

//问题程序：：为什么把命名空间加上就会报错
//猜测：：编译问题，顺序问题
