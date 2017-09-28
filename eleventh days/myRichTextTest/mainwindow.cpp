#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextFrame>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("myRichTextTest"));

    QTextDocument *document = ui->textEdit->document();
    QTextFrame *root_frame = document->rootFrame();

    QTextFrameFormat *frame_format = new QTextFrameFormat;
    frame_format->setBorderBrush(Qt::red);
    frame_format->setBorder(3);
    //frame_format->setBackground(Qt::darkGreen);
    //frame_format->setHeight(20);
    root_frame->setFrameFormat(*frame_format);

    QTextFrameFormat frameFormat;
    // 设置背景颜色
    frameFormat.setBackground(Qt::lightGray);
    // 设置边距
    frameFormat.setMargin(10);
    // 设置填衬
    frameFormat.setPadding(2);
    frameFormat.setBorder(2);
   // frameFormat.setBorderStyle(QTextFrameFormat::BorderStyle_Dotted); //设置边框样式

    // 获取光标
    QTextCursor cursor = ui->textEdit->textCursor();
    // 在光标处插入框架
    cursor.insertFrame(frameFormat);

}

MainWindow::~MainWindow()
{
    delete ui;
}
