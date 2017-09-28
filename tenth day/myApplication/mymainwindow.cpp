#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include <QMenu>
#include <QToolButton>
#include <QSpinBox>
#include <QTextEdit>
#include <QMdiSubWindow>
#include <QListWidget>
#include <QMouseEvent>

myMainWindow::myMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myMainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("我的主窗口开始来吧！！！");
    QMenu *editmenu = ui->menuBar->addMenu(tr("编辑(&E)"));  //添加组件   返回添加的组件的指针
    QAction *action_open = editmenu->addAction(               //该组件中添加组件，返回该新的组件
                QIcon(":/images/images/open.png"),tr("打开文件(&O)"));
    action_open->setShortcut(QKeySequence("Ctrl+O"));               //添加快捷键
    ui->mainToolBar->addAction(action_open);                        //工具栏中添加组件


    this->setWindowOpacity(0.8);
    this->setWindowFlags(Qt::FramelessWindowHint);              //隐藏掉标题栏S
   // this->setAttribute(Qt::WA_TranslucentBackground);

    QActionGroup *qgrp = new QActionGroup(this);
    QAction *action_l = qgrp->addAction(tr("左对齐(&L)"));
    action_l->setCheckable(true);
    QAction *action_r = qgrp->addAction(tr("右对齐(&R)"));
    action_r->setCheckable(true);
    QAction *action_c = qgrp->addAction(tr("居中(&C)"));
    action_c->setCheckable(true);

    action_l->setChecked(true);

    editmenu->addSeparator();
    editmenu->addAction(action_l);
    editmenu->addAction(action_c);
    editmenu->addAction(action_r);

    QToolButton *qtoolbtn = new QToolButton(this);
    qtoolbtn->setText(tr("颜色"));

    QMenu *color_menu = new QMenu(this);

    color_menu->addAction(tr("红色(&R)"));
    color_menu->addAction(tr("绿色(&G)"));

    qtoolbtn->setMenu(color_menu);
    qtoolbtn->setPopupMode(QToolButton::MenuButtonPopup);

    ui->mainToolBar->addWidget(qtoolbtn);

    ui->dockWidget->setWindowTitle(tr("工具箱"));
}

myMainWindow::~myMainWindow()
{
    delete ui;
}

void myMainWindow::on_New_file_triggered()
{
    QTextEdit *edit = new QTextEdit(this);
    edit->setFrameShape(QListWidget::NoFrame);

    QMdiSubWindow *child = ui->mdiArea->addSubWindow(edit);
    child->setWindowTitle(tr("新建文件"));
    child->show();
}





void myMainWindow::on_show_dock_triggered()
{
    ui->dockWidget->show();
}

void myMainWindow::mousePressEvent(QMouseEvent *event)
{
    this->window_pos = this->pos();

    this->mouse_pos = event->globalPos();

    this->dpos = this->mouse_pos - this->window_pos;
}

void myMainWindow::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos() - this->dpos);
}






















