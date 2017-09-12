#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

namespace Ui {
class myWidget;
}

class myWidget : public QWidget
{
    Q_OBJECT

public:
    explicit myWidget(QWidget *parent = 0);
    ~myWidget();

public slots:
    void on_loginMainWindow_clicked();
    void on_showChildWindow_clicked();

private:
    Ui::myWidget *ui;
};

#endif // MYWIDGET_H
