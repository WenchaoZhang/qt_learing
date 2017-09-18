/********************************************************************************
** Form generated from reading UI file 'mydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG_H
#define UI_MYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyDialog
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *cboxSerialPortName;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QComboBox *cboxBaudRate;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QComboBox *cboxDateBit;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QComboBox *cboxCheckBit;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QComboBox *cboxStopBit;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEditReject;
    QTextEdit *textEditSend;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnOpenSerialPort;
    QPushButton *btnSendDate;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyDialog)
    {
        if (MyDialog->objectName().isEmpty())
            MyDialog->setObjectName(QStringLiteral("MyDialog"));
        MyDialog->resize(603, 568);
        centralWidget = new QWidget(MyDialog);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_9 = new QVBoxLayout(centralWidget);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        cboxSerialPortName = new QComboBox(centralWidget);
        cboxSerialPortName->setObjectName(QStringLiteral("cboxSerialPortName"));

        verticalLayout->addWidget(cboxSerialPortName);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        cboxBaudRate = new QComboBox(centralWidget);
        cboxBaudRate->setObjectName(QStringLiteral("cboxBaudRate"));

        verticalLayout_3->addWidget(cboxBaudRate);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_4->addWidget(label_2);

        cboxDateBit = new QComboBox(centralWidget);
        cboxDateBit->setObjectName(QStringLiteral("cboxDateBit"));

        verticalLayout_4->addWidget(cboxDateBit);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_5->addWidget(label_4);

        cboxCheckBit = new QComboBox(centralWidget);
        cboxCheckBit->setObjectName(QStringLiteral("cboxCheckBit"));

        verticalLayout_5->addWidget(cboxCheckBit);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_6->addWidget(label_5);

        cboxStopBit = new QComboBox(centralWidget);
        cboxStopBit->setObjectName(QStringLiteral("cboxStopBit"));

        verticalLayout_6->addWidget(cboxStopBit);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textEditReject = new QTextEdit(centralWidget);
        textEditReject->setObjectName(QStringLiteral("textEditReject"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(7);
        sizePolicy.setHeightForWidth(textEditReject->sizePolicy().hasHeightForWidth());
        textEditReject->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(textEditReject);

        textEditSend = new QTextEdit(centralWidget);
        textEditSend->setObjectName(QStringLiteral("textEditSend"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(textEditSend->sizePolicy().hasHeightForWidth());
        textEditSend->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(textEditSend);


        verticalLayout_7->addLayout(verticalLayout_2);


        verticalLayout_8->addLayout(verticalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btnOpenSerialPort = new QPushButton(centralWidget);
        btnOpenSerialPort->setObjectName(QStringLiteral("btnOpenSerialPort"));

        horizontalLayout_2->addWidget(btnOpenSerialPort);

        btnSendDate = new QPushButton(centralWidget);
        btnSendDate->setObjectName(QStringLiteral("btnSendDate"));

        horizontalLayout_2->addWidget(btnSendDate);


        verticalLayout_8->addLayout(horizontalLayout_2);


        verticalLayout_9->addLayout(verticalLayout_8);

        MyDialog->setCentralWidget(centralWidget);
        label->raise();
        cboxSerialPortName->raise();
        label_2->raise();
        cboxDateBit->raise();
        label_3->raise();
        cboxBaudRate->raise();
        label_4->raise();
        cboxCheckBit->raise();
        label_5->raise();
        cboxStopBit->raise();
        label->raise();
        btnSendDate->raise();
        btnOpenSerialPort->raise();
        textEditReject->raise();
        textEditSend->raise();
        menuBar = new QMenuBar(MyDialog);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 603, 23));
        MyDialog->setMenuBar(menuBar);
        statusBar = new QStatusBar(MyDialog);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MyDialog->setStatusBar(statusBar);

        retranslateUi(MyDialog);

        QMetaObject::connectSlotsByName(MyDialog);
    } // setupUi

    void retranslateUi(QMainWindow *MyDialog)
    {
        MyDialog->setWindowTitle(QApplication::translate("MyDialog", "MyDialog", 0));
        label->setText(QApplication::translate("MyDialog", "      \344\270\262\345\217\243\345\217\267", 0));
        label_3->setText(QApplication::translate("MyDialog", "     \346\263\242\347\211\271\347\216\207", 0));
        cboxBaudRate->clear();
        cboxBaudRate->insertItems(0, QStringList()
         << QApplication::translate("MyDialog", "9600", 0)
         << QApplication::translate("MyDialog", "115200", 0)
        );
        label_2->setText(QApplication::translate("MyDialog", "     \346\225\260\346\215\256\344\275\215", 0));
        cboxDateBit->clear();
        cboxDateBit->insertItems(0, QStringList()
         << QApplication::translate("MyDialog", "5", 0)
         << QApplication::translate("MyDialog", "6", 0)
         << QApplication::translate("MyDialog", "7", 0)
         << QApplication::translate("MyDialog", "8", 0)
        );
        label_4->setText(QApplication::translate("MyDialog", "     \346\240\241\351\252\214\344\275\215", 0));
        cboxCheckBit->clear();
        cboxCheckBit->insertItems(0, QStringList()
         << QApplication::translate("MyDialog", "NONE", 0)
        );
        label_5->setText(QApplication::translate("MyDialog", "     \345\201\234\346\255\242\344\275\215", 0));
        cboxStopBit->clear();
        cboxStopBit->insertItems(0, QStringList()
         << QApplication::translate("MyDialog", "1", 0)
         << QApplication::translate("MyDialog", "1.5", 0)
         << QApplication::translate("MyDialog", "2", 0)
        );
        btnOpenSerialPort->setText(QApplication::translate("MyDialog", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        btnSendDate->setText(QApplication::translate("MyDialog", "\345\217\221\351\200\201", 0));
    } // retranslateUi

};

namespace Ui {
    class MyDialog: public Ui_MyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
