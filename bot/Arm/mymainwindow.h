#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QStackedLayout>
#include "serialwidget.h"
#include "controlwidget.h"
#include "ballcontrol.h"
#include "barcontrol.h"
#include "opencvwidget.h"

namespace Ui {
class MyMainWindow;
}

class MyMainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        explicit MyMainWindow(QWidget *parent = 0);
        ~MyMainWindow();
        void turn_to_main();
        void turn_to_serial();
        void turn_to_control();

    private:
        Ui::MyMainWindow *ui;

    private:
        QStackedLayout *sl;
        QStackedLayout *sl_left;
         ControlWidget *cw;
         SerialWidget *sw;
         BallControl *bc;
         BarControl *barc;
         OpencvWidget *ow;

private slots:
         void on_pushButton_clicked();
         void on_pushButton_3_clicked();
         void on_pushButton_4_clicked();
         void on_pushButton_5_clicked();
         void on_pushButton_2_clicked();
};

#endif // MYMAINWINDOW_H
