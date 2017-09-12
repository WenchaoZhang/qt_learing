/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myWidget
{
public:
    QLabel *myLabel;
    QPushButton *loginMainWindow;
    QPushButton *Quit;
    QPushButton *showChildWindow;

    void setupUi(QWidget *myWidget)
    {
        if (myWidget->objectName().isEmpty())
            myWidget->setObjectName(QStringLiteral("myWidget"));
        myWidget->resize(400, 300);
        myLabel = new QLabel(myWidget);
        myLabel->setObjectName(QStringLiteral("myLabel"));
        myLabel->setGeometry(QRect(160, 50, 71, 16));
        loginMainWindow = new QPushButton(myWidget);
        loginMainWindow->setObjectName(QStringLiteral("loginMainWindow"));
        loginMainWindow->setGeometry(QRect(150, 170, 75, 23));
        Quit = new QPushButton(myWidget);
        Quit->setObjectName(QStringLiteral("Quit"));
        Quit->setGeometry(QRect(280, 170, 75, 23));
        showChildWindow = new QPushButton(myWidget);
        showChildWindow->setObjectName(QStringLiteral("showChildWindow"));
        showChildWindow->setGeometry(QRect(30, 170, 75, 23));

        retranslateUi(myWidget);
        QObject::connect(Quit, SIGNAL(clicked()), myWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(myWidget);
    } // setupUi

    void retranslateUi(QWidget *myWidget)
    {
        myWidget->setWindowTitle(QApplication::translate("myWidget", "Form", 0));
        myLabel->setText(QApplication::translate("myWidget", "\346\210\221\346\230\257\344\270\273\347\225\214\351\235\242", 0));
        loginMainWindow->setText(QApplication::translate("myWidget", "\347\231\273\351\231\206\344\270\273\347\225\214\351\235\242", 0));
        Quit->setText(QApplication::translate("myWidget", "\351\200\200\345\207\272", 0));
        showChildWindow->setText(QApplication::translate("myWidget", "\346\230\276\347\244\272\345\255\220\347\252\227\345\217\243", 0));
    } // retranslateUi

};

namespace Ui {
    class myWidget: public Ui_myWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
