/********************************************************************************
** Form generated from reading UI file 'controlwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLWIDGET_H
#define UI_CONTROLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlWidget
{
public:
    QWidget *widget;
    QLabel *label;

    void setupUi(QWidget *ControlWidget)
    {
        if (ControlWidget->objectName().isEmpty())
            ControlWidget->setObjectName(QStringLiteral("ControlWidget"));
        ControlWidget->resize(449, 459);
        ControlWidget->setStyleSheet(QStringLiteral(""));
        widget = new QWidget(ControlWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 449, 459));
        widget->setStyleSheet(QStringLiteral("background:rgb(84, 84, 84)"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 150, 151, 101));
        label->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 75 24pt \"Agency FB\";"));
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        retranslateUi(ControlWidget);

        QMetaObject::connectSlotsByName(ControlWidget);
    } // setupUi

    void retranslateUi(QWidget *ControlWidget)
    {
        ControlWidget->setWindowTitle(QApplication::translate("ControlWidget", "Form", 0));
        label->setText(QApplication::translate("ControlWidget", "3D\346\250\241\345\236\213", 0));
    } // retranslateUi

};

namespace Ui {
    class ControlWidget: public Ui_ControlWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLWIDGET_H
