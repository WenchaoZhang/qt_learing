/********************************************************************************
** Form generated from reading UI file 'ballcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALLCONTROL_H
#define UI_BALLCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BallControl
{
public:
    QWidget *widget;
    QDial *dial_4;
    QDial *dial_5;
    QSpinBox *spinBox_6;
    QDial *dial_2;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_4;
    QDial *dial_3;
    QDial *dial_6;
    QDial *dial;
    QSpinBox *spinBox_3;

    void setupUi(QWidget *BallControl)
    {
        if (BallControl->objectName().isEmpty())
            BallControl->setObjectName(QStringLiteral("BallControl"));
        BallControl->resize(224, 459);
        BallControl->setStyleSheet(QLatin1String("\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));"));
        widget = new QWidget(BallControl);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 224, 459));
        dial_4 = new QDial(widget);
        dial_4->setObjectName(QStringLiteral("dial_4"));
        dial_4->setGeometry(QRect(124, 150, 80, 80));
        dial_4->setMouseTracking(false);
        dial_4->setAcceptDrops(false);
        dial_4->setAutoFillBackground(false);
        dial_4->setNotchesVisible(true);
        dial_5 = new QDial(widget);
        dial_5->setObjectName(QStringLiteral("dial_5"));
        dial_5->setGeometry(QRect(20, 278, 80, 80));
        dial_5->setMouseTracking(false);
        dial_5->setAcceptDrops(false);
        dial_5->setAutoFillBackground(false);
        dial_5->setStyleSheet(QLatin1String("\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));\n"
"color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(255, 255, 255, 255), stop:0.373979 rgba(255, 255, 255, 255), stop:0.373991 rgba(33, 30, 255, 255), stop:0.624018 rgba(33, 30, 255, 255), stop:0.624043 rgba(255, 0, 0, 255), stop:1 rgba(255, 0, 0, 255));"));
        dial_5->setNotchesVisible(true);
        spinBox_6 = new QSpinBox(widget);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));
        spinBox_6->setGeometry(QRect(135, 368, 61, 22));
        spinBox_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        dial_2 = new QDial(widget);
        dial_2->setObjectName(QStringLiteral("dial_2"));
        dial_2->setGeometry(QRect(124, 28, 80, 80));
        dial_2->setMouseTracking(false);
        dial_2->setAcceptDrops(false);
        dial_2->setAutoFillBackground(false);
        dial_2->setWrapping(false);
        dial_2->setNotchesVisible(true);
        spinBox_5 = new QSpinBox(widget);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));
        spinBox_5->setGeometry(QRect(30, 368, 61, 22));
        spinBox_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(30, 118, 61, 22));
        spinBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        spinBox->setMinimum(0);
        spinBox->setMaximum(3600);
        spinBox->setSingleStep(1);
        spinBox->setValue(0);
        spinBox->setDisplayIntegerBase(10);
        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(135, 118, 61, 22));
        spinBox_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        spinBox_4 = new QSpinBox(widget);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setGeometry(QRect(135, 240, 61, 22));
        spinBox_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        dial_3 = new QDial(widget);
        dial_3->setObjectName(QStringLiteral("dial_3"));
        dial_3->setGeometry(QRect(20, 150, 80, 80));
        dial_3->setMouseTracking(false);
        dial_3->setAcceptDrops(false);
        dial_3->setAutoFillBackground(false);
        dial_3->setNotchesVisible(true);
        dial_6 = new QDial(widget);
        dial_6->setObjectName(QStringLiteral("dial_6"));
        dial_6->setGeometry(QRect(124, 278, 80, 80));
        dial_6->setMouseTracking(false);
        dial_6->setAcceptDrops(false);
        dial_6->setAutoFillBackground(false);
        dial_6->setStyleSheet(QStringLiteral(""));
        dial_6->setNotchesVisible(true);
        dial = new QDial(widget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(20, 28, 80, 80));
        dial->setMouseTracking(false);
        dial->setAcceptDrops(false);
        dial->setAutoFillBackground(false);
        dial->setMaximum(3600);
        dial->setSingleStep(1);
        dial->setPageStep(10);
        dial->setValue(0);
        dial->setSliderPosition(0);
        dial->setInvertedAppearance(false);
        dial->setWrapping(true);
        dial->setNotchesVisible(false);
        spinBox_3 = new QSpinBox(widget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(30, 240, 61, 22));
        spinBox_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        retranslateUi(BallControl);

        QMetaObject::connectSlotsByName(BallControl);
    } // setupUi

    void retranslateUi(QWidget *BallControl)
    {
        BallControl->setWindowTitle(QApplication::translate("BallControl", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class BallControl: public Ui_BallControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALLCONTROL_H
