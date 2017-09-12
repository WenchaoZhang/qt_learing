#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>

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
    QDialog *dialog = new QDialog(this);
    dialog -> show();
}
