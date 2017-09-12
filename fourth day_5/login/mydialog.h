#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>

namespace Ui {
class myDialog;
}

class myDialog : public QDialog
{
    Q_OBJECT

public:
    explicit myDialog(QWidget *parent = 0);
    ~myDialog();

public slots:
    void on_showMainWindow_clicked();

private:
    Ui::myDialog *ui;
};

#endif // MYDIALOG_H
