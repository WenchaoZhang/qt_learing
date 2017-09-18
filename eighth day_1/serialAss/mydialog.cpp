#include "mydialog.h"
#include "ui_mydialog.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QList>
#include <QDebug>


MyDialog::MyDialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
    this->btnOpenSerialPortFlag = false;
    ui->btnOpenSerialPort->setText("打开串口");
    this->setWindowTitle("串口调试助手-Serial debugging assistant");
    this->getAndSetSerialPortName();
    ui->btnSendDate->setEnabled(false);

    connect(&mySertialPort,SIGNAL(readyRead()), this, SLOT(on_textRead_readyRead()));

}

MyDialog::~MyDialog()
{
    delete ui;
}


/*
* @brief       串口号动态获取并设置函数
* @note        动态得到串口的在线信息并且设置到界面的串口号选项里
* @param[in]   void
* @return      void
* @author      zwc
*/
void MyDialog::getAndSetSerialPortName()
{
    QList<QSerialPortInfo> serialportinf = QSerialPortInfo::availablePorts();
    qDebug() << serialportinf.count() << endl;
    int tmp = serialportinf.count();
    for(int i = 0; i < tmp; i++)
    {
        ui->cboxSerialPortName->addItem(serialportinf.at(i).portName());
    }
}


/*
* @brief       串口配置信息动态获取并设置函数
* @note        这个函数用在点击打开串口的按钮时调用，用来配置串口的波特率，数据位，停止位等
* @param[in]   void
* @return      void
* @author      zwc
*/
bool MyDialog::getAndSetSerialPortConfig()
{
    //设置串口号
    mySertialPort.setPortName(ui->cboxSerialPortName->currentText());

    //设置波特率
    if(ui->cboxBaudRate->currentText() == "9600"){mySertialPort.setBaudRate(QSerialPort::Baud9600);}
    else if(ui->cboxBaudRate->currentText() == "115200"){mySertialPort.setBaudRate(QSerialPort::Baud115200);}

    //设置校验位
    if(ui->cboxCheckBit->currentText() == "NONE"){mySertialPort.setParity(QSerialPort::NoParity);}


    //设置停止位
    if(ui->cboxStopBit->currentText() == "1"){mySertialPort.setStopBits(QSerialPort::OneStop);}
    else if(ui->cboxStopBit->currentText() == "1.5"){mySertialPort.setStopBits(QSerialPort::OneAndHalfStop);}
    else if(ui->cboxStopBit->currentText() == "2"){mySertialPort.setStopBits(QSerialPort::TwoStop);}

    //设置数据位
    if(ui->cboxDateBit->currentText() == "5"){mySertialPort.setDataBits(QSerialPort::Data5);}
    else if(ui->cboxDateBit->currentText() == "6"){mySertialPort.setDataBits(QSerialPort::Data6);}
    else if(ui->cboxDateBit->currentText() == "7"){mySertialPort.setDataBits(QSerialPort::Data7);}
    else if(ui->cboxDateBit->currentText() == "8"){mySertialPort.setDataBits(QSerialPort::Data8);}
    return mySertialPort.open(QSerialPort::ReadWrite);

    //设置流控制
    mySertialPort.setFlowControl(QSerialPort::NoFlowControl);
}

/*
* @brief       打开或关闭串口按钮槽函数
* @note        点击打开关闭串口按钮，执行相关动作函数
* @param[in]   void
* @return      void
* @author      zwc
*/
void MyDialog::on_btnOpenSerialPort_clicked()
{
    if(btnOpenSerialPortFlag == true)
    {
        mySertialPort.close();                          //重要：之前一直关不了，注意，调用close()函数关闭串口
        btnOpenSerialPortFlag = false;
        ui->btnOpenSerialPort->setText("打开串口");
        ui->cboxSerialPortName->setEnabled(true);
        ui->cboxBaudRate->setEnabled(true);
        ui->cboxCheckBit->setEnabled(true);
        ui->cboxStopBit->setEnabled(true);
        ui->cboxDateBit->setEnabled(true);
        ui->btnSendDate->setEnabled(false);
    }
    else
    {
        btnOpenSerialPortFlag = this->getAndSetSerialPortConfig();
        if(btnOpenSerialPortFlag == true)
        {
           ui->btnOpenSerialPort->setText("关闭串口");
           ui->cboxSerialPortName->setEnabled(false);
           ui->cboxBaudRate->setEnabled(false);
           ui->cboxCheckBit->setEnabled(false);
           ui->cboxStopBit->setEnabled(false);
           ui->cboxDateBit->setEnabled(false);
           ui->btnSendDate->setEnabled(true);
        }
    }
}

/*
* @brief       写信息按钮槽函数
* @note        点击发送信息按钮，执行发送指令
* @param[in]   void
* @return      void
* @author      zwc
*/
void MyDialog::on_btnSendDate_clicked()
{
    mySertialPort.write(ui->textEditSend->toPlainText().toStdString().c_str());
}

/*
* @brief       读信息显示槽函数
* @note        读出来的信息显示在界面中
* @param[in]   void
* @return      void
* @author      zwc
*/
void MyDialog::on_textRead_readyRead()
{
    QByteArray recvData = mySertialPort.readAll();

    ui->textEditReject->append(QString(recvData));
}
