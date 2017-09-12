#include "mywidget.h"
#include "ui_mywidget.h"
#include "mydialog.h"
#include <QDialog>

myWidget::myWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myWidget)
{
    ui->setupUi(this);
}

myWidget::~myWidget()
{
    delete ui;
}

void myWidget::on_loginMainWindow_clicked()
{
    close();
    myDialog dlg;
    if(dlg.exec() == QDialog::Accepted)
    {
        show();
    }

}

void myWidget::on_showChildWindow_clicked()
{
    QDialog *dia = new QDialog();
    dia ->resize(100,100);
    dia -> show();
}
