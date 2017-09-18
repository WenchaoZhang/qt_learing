#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QMainWindow>
#include <QSerialPort>

namespace Ui {
class MyDialog;
}

class MyDialog : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyDialog(QWidget *parent = 0);
    ~MyDialog();
    void getAndSetSerialPortName(void);
    bool getAndSetSerialPortConfig(void);
    bool btnOpenSerialPortFlag;

private slots:
    void on_btnOpenSerialPort_clicked();

    void on_btnSendDate_clicked();

    void on_textRead_readyRead();

private:
    Ui::MyDialog *ui;
    QSerialPort mySertialPort;
};

#endif // MYDIALOG_H
