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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_myDialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *showMainWindow;

    void setupUi(QDialog *myDialog)
    {
        if (myDialog->objectName().isEmpty())
            myDialog->setObjectName(QStringLiteral("myDialog"));
        myDialog->resize(400, 300);
        label = new QLabel(myDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 60, 81, 16));
        pushButton = new QPushButton(myDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 190, 75, 23));
        showMainWindow = new QPushButton(myDialog);
        showMainWindow->setObjectName(QStringLiteral("showMainWindow"));
        showMainWindow->setGeometry(QRect(60, 190, 75, 23));

        retranslateUi(myDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), myDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(myDialog);
    } // setupUi

    void retranslateUi(QDialog *myDialog)
    {
        myDialog->setWindowTitle(QApplication::translate("myDialog", "Dialog", 0));
        label->setText(QApplication::translate("myDialog", "\350\277\231\346\230\257\345\255\220\347\252\227\345\217\243", 0));
        pushButton->setText(QApplication::translate("myDialog", "\351\200\200\345\207\272\347\250\213\345\272\217", 0));
        showMainWindow->setText(QApplication::translate("myDialog", "\346\230\276\347\244\272\344\270\273\347\252\227\345\217\243", 0));
    } // retranslateUi

};

namespace Ui {
    class myDialog: public Ui_myDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
