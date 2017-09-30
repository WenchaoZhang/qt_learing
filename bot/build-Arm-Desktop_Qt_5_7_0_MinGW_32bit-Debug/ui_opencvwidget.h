/********************************************************************************
** Form generated from reading UI file 'opencvwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENCVWIDGET_H
#define UI_OPENCVWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpencvWidget
{
public:
    QWidget *widget;
    QLabel *label;

    void setupUi(QWidget *OpencvWidget)
    {
        if (OpencvWidget->objectName().isEmpty())
            OpencvWidget->setObjectName(QStringLiteral("OpencvWidget"));
        OpencvWidget->resize(453, 459);
        widget = new QWidget(OpencvWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 453, 459));
        widget->setStyleSheet(QStringLiteral("background:rgb(84, 84, 84)"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 160, 151, 101));
        label->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 75 24pt \"Agency FB\";"));
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        retranslateUi(OpencvWidget);

        QMetaObject::connectSlotsByName(OpencvWidget);
    } // setupUi

    void retranslateUi(QWidget *OpencvWidget)
    {
        OpencvWidget->setWindowTitle(QApplication::translate("OpencvWidget", "Form", 0));
        label->setText(QApplication::translate("OpencvWidget", "opencv\350\247\206\350\247\211", 0));
    } // retranslateUi

};

namespace Ui {
    class OpencvWidget: public Ui_OpencvWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENCVWIDGET_H
