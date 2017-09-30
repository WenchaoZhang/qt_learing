/********************************************************************************
** Form generated from reading UI file 'barcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BARCONTROL_H
#define UI_BARCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BarControl
{
public:
    QWidget *widget;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider_4;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_5;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_5;

    void setupUi(QWidget *BarControl)
    {
        if (BarControl->objectName().isEmpty())
            BarControl->setObjectName(QStringLiteral("BarControl"));
        BarControl->resize(224, 459);
        widget = new QWidget(BarControl);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 224, 459));
        widget->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));
        horizontalSlider_2 = new QSlider(widget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(20, 50, 160, 19));
        horizontalSlider_2->setMaximum(3600);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_3 = new QSlider(widget);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(20, 110, 160, 19));
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        horizontalSlider_4 = new QSlider(widget);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setGeometry(QRect(20, 180, 160, 19));
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 270, 160, 19));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_5 = new QSlider(widget);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setGeometry(QRect(20, 340, 160, 19));
        horizontalSlider_5->setOrientation(Qt::Horizontal);
        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(70, 70, 71, 22));
        spinBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        spinBox->setMaximum(3600);
        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(70, 150, 71, 22));
        spinBox_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        spinBox_3 = new QSpinBox(widget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(70, 230, 71, 22));
        spinBox_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        spinBox_4 = new QSpinBox(widget);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setGeometry(QRect(70, 310, 71, 22));
        spinBox_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        spinBox_5 = new QSpinBox(widget);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setGeometry(QRect(70, 370, 71, 22));
        spinBox_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        retranslateUi(BarControl);

        QMetaObject::connectSlotsByName(BarControl);
    } // setupUi

    void retranslateUi(QWidget *BarControl)
    {
        BarControl->setWindowTitle(QApplication::translate("BarControl", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class BarControl: public Ui_BarControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARCONTROL_H
