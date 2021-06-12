/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Serie;
    QAction *actionNew_Season;
    QAction *actionNew_Chapter;
    QAction *actionNew_Movie;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew_Serie = new QAction(MainWindow);
        actionNew_Serie->setObjectName(QString::fromUtf8("actionNew_Serie"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/Assets/Icons/netflix-seeklogo.com.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Serie->setIcon(icon);
        actionNew_Season = new QAction(MainWindow);
        actionNew_Season->setObjectName(QString::fromUtf8("actionNew_Season"));
        actionNew_Chapter = new QAction(MainWindow);
        actionNew_Chapter->setObjectName(QString::fromUtf8("actionNew_Chapter"));
        actionNew_Movie = new QAction(MainWindow);
        actionNew_Movie->setObjectName(QString::fromUtf8("actionNew_Movie"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew_Serie);
        menuFile->addAction(actionNew_Season);
        menuFile->addAction(actionNew_Chapter);
        menuFile->addAction(actionNew_Movie);
        toolBar->addAction(actionNew_Serie);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_Serie->setText(QCoreApplication::translate("MainWindow", "New Serie", nullptr));
        actionNew_Season->setText(QCoreApplication::translate("MainWindow", "New Season", nullptr));
        actionNew_Chapter->setText(QCoreApplication::translate("MainWindow", "New Chapter", nullptr));
        actionNew_Movie->setText(QCoreApplication::translate("MainWindow", "New Movie", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
