#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_dialog.h"
#include "dialog.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void showChildDialog();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
