/********************************************************************************
** Form generated from reading UI file 'serialwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALWIDGET_H
#define UI_SERIALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialWidget
{
public:
    QWidget *widget;
    QLabel *label;

    void setupUi(QWidget *SerialWidget)
    {
        if (SerialWidget->objectName().isEmpty())
            SerialWidget->setObjectName(QStringLiteral("SerialWidget"));
        SerialWidget->resize(449, 459);
        SerialWidget->setStyleSheet(QStringLiteral("backguond:rgb(255, 0, 0);"));
        widget = new QWidget(SerialWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 449, 459));
        widget->setStyleSheet(QStringLiteral("background:rgb(84, 84, 84)"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 150, 171, 101));
        label->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 75 24pt \"Agency FB\";"));
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        retranslateUi(SerialWidget);

        QMetaObject::connectSlotsByName(SerialWidget);
    } // setupUi

    void retranslateUi(QWidget *SerialWidget)
    {
        SerialWidget->setWindowTitle(QApplication::translate("SerialWidget", "Form", 0));
        label->setText(QApplication::translate("SerialWidget", "\350\257\257\345\267\256\346\263\242\345\275\242\345\233\276", 0));
    } // retranslateUi

};

namespace Ui {
    class SerialWidget: public Ui_SerialWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALWIDGET_H
