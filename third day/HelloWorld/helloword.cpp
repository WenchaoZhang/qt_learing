#include "helloword.h"
#include "ui_helloword.h"

Dialog::Dialog(QWidget *parent):QDialog(parent)
{
    ui = new Ui::Dialog;
    ui -> setupUi(this);
}
