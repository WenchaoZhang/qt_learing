#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QPoint>

namespace Ui {
class myMainWindow;
}

class myMainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit myMainWindow(QWidget *parent = 0);
    ~myMainWindow();

private slots:
    void on_New_file_triggered();

    void on_show_dock_triggered();

private:
    Ui::myMainWindow *ui;

private:
    QPoint window_pos;
    QPoint mouse_pos;
    QPoint dpos;

public:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
};

#endif // MYMAINWINDOW_H
