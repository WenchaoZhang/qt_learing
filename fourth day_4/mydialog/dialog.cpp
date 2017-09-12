#include "dialog.h"
#include "ui_dialog.h"

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui1(new Ui1::Dialog1)
{
   ui1->setupUi(this);
    //ui1 -> show();
}

Dialog1::~Dialog1()
{
    delete ui1;
}

void Dialog1::clickMainWindow()
{
    //close();
}
