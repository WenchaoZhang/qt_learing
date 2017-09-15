#include "mywidget.h"
#include "ui_mywidget.h"
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QProgressDialog>


MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushButton_clicked()
{
    QColor color = QColorDialog::getColor(Qt::red,this, tr("颜色对话框。。"));
}

void MyWidget::on_pushButton_2_clicked()
{
    QString  fileName = QFileDialog::getOpenFileName(this, tr("文件对话框"),"D:",tr("")); //图片文件(*png*jpg)  //写入tr双引号中的参数
}

void MyWidget::on_pushButton_3_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if(ok) ui->pushButton_3->setFont(font);
}

void MyWidget::on_pushButton_4_clicked()
{
    bool ok;
    QString string = QInputDialog::getText(this, tr("输入字符串对话框"), tr("请输入用户名:"),QLineEdit::Normal,tr("admin"),&ok);

}

void MyWidget::on_pushButton_5_clicked()
{
    int ret1 = QMessageBox::question(this, tr("问题对话框"),
                                     tr("你想了解qt吗？"),QMessageBox::Yes, QMessageBox::No);
}

void MyWidget::on_pushButton_6_clicked()
{
    QProgressDialog dialog(tr("文件复制进度"),tr("取消"),0,50000,this);

    // 设置窗口标题
    dialog.setWindowTitle(tr("进度对话框"));

    // 将对话框设置为模态
    dialog.setWindowModality(Qt::WindowModal);
    dialog.show();

    // 演示复制进度
    for(int i=0;i<50000;i++){

        // 设置进度条的当前值
        dialog.setValue(i);

        // 避免界面冻结
        QCoreApplication::processEvents();

        // 按下取消按钮则中断
        if(dialog.wasCanceled()) break;
    }

    // 这样才能显示100%，因为for循环中少加了一个数
    dialog.setValue(50000);
    //qDebug() << tr("复制结束！");
}
