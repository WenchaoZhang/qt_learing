/********************************************************************************
** Form generated from reading UI file 'mymainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAINWINDOW_H
#define UI_MYMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myMainWindow
{
public:
    QAction *New_file;
    QAction *show_dock;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QFontComboBox *fontComboBox;
    QPushButton *pushButton;

    void setupUi(QMainWindow *myMainWindow)
    {
        if (myMainWindow->objectName().isEmpty())
            myMainWindow->setObjectName(QStringLiteral("myMainWindow"));
        myMainWindow->resize(400, 300);
        New_file = new QAction(myMainWindow);
        New_file->setObjectName(QStringLiteral("New_file"));
        New_file->setCheckable(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        New_file->setIcon(icon);
        show_dock = new QAction(myMainWindow);
        show_dock->setObjectName(QStringLiteral("show_dock"));
        centralWidget = new QWidget(myMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        myMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(myMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        myMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(myMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setIconSize(QSize(23, 23));
        mainToolBar->setFloatable(true);
        myMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(myMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        myMainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(myMainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        fontComboBox = new QFontComboBox(dockWidgetContents);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(10, 100, 61, 22));
        pushButton = new QPushButton(dockWidgetContents);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 40, 71, 23));
        dockWidget->setWidget(dockWidgetContents);
        myMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addAction(New_file);
        menu_F->addSeparator();
        menu_F->addAction(show_dock);
        mainToolBar->addAction(New_file);
        mainToolBar->addAction(show_dock);

        retranslateUi(myMainWindow);

        QMetaObject::connectSlotsByName(myMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *myMainWindow)
    {
        myMainWindow->setWindowTitle(QApplication::translate("myMainWindow", "myMainWindow", 0));
        New_file->setText(QApplication::translate("myMainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266(&N)", 0));
        New_file->setShortcut(QApplication::translate("myMainWindow", "Ctrl+N", 0));
        show_dock->setText(QApplication::translate("myMainWindow", "\346\230\276\347\244\272dock(&Q)", 0));
#ifndef QT_NO_TOOLTIP
        show_dock->setToolTip(QApplication::translate("myMainWindow", "show_dock(&q)", 0));
#endif // QT_NO_TOOLTIP
        show_dock->setShortcut(QApplication::translate("myMainWindow", "Ctrl+W", 0));
        menu_F->setTitle(QApplication::translate("myMainWindow", "Fille(&F)", 0));
        menu_H->setTitle(QApplication::translate("myMainWindow", "Help(&H)", 0));
        pushButton->setText(QApplication::translate("myMainWindow", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class myMainWindow: public Ui_myMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
