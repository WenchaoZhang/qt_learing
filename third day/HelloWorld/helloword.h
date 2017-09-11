#ifndef HELLOWORD_H
#define HELLOWORD_H

#include <QDialog>
#include "ui_helloword.h"

namespace Ui
{
    class Dialog;
}

class Dialog : public QDialog
{
public:
    explicit Dialog(QWidget *parent = 0);
private:
    Ui::Dialog *ui;
};

#endif // HELLOWORD_H
