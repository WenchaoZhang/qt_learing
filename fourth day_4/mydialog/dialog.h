#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui1 {
  class Dialog1;
}


class Dialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog1(QWidget *parent = 0);
    ~Dialog1();
public:
    void showChildWin();

    public slots:
    void clickMainWindow();

private:
    Ui1::Dialog1 *ui1;
};


#endif // DIALOG_H
