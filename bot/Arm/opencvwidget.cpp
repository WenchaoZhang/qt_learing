#include "opencvwidget.h"
#include "ui_opencvwidget.h"

OpencvWidget::OpencvWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OpencvWidget)
{
    ui->setupUi(this);
}

OpencvWidget::~OpencvWidget()
{
    delete ui;
}
