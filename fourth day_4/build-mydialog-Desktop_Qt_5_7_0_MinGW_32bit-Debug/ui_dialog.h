/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QPushButton *showMainWindow;
    QPushButton *quitProgram;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 40, 91, 16));
        showMainWindow = new QPushButton(Dialog);
        showMainWindow->setObjectName(QStringLiteral("showMainWindow"));
        showMainWindow->setGeometry(QRect(70, 140, 75, 23));
        quitProgram = new QPushButton(Dialog);
        quitProgram->setObjectName(QStringLiteral("quitProgram"));
        quitProgram->setGeometry(QRect(200, 140, 75, 23));

        retranslateUi(Dialog);
        QObject::connect(quitProgram, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QApplication::translate("Dialog", "\350\277\231\346\230\257\345\255\220\347\252\227\345\217\243", 0));
        showMainWindow->setText(QApplication::translate("Dialog", "\346\230\276\347\244\272\344\270\273\347\252\227\345\217\243", 0));
        quitProgram->setText(QApplication::translate("Dialog", "\351\200\200\345\207\272\347\250\213\345\272\217", 0));
    } // retranslateUi

    void show(QDialog Dialog){
        Dialog.show();
    }
};

namespace Ui1 {
    class Dialog1: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
