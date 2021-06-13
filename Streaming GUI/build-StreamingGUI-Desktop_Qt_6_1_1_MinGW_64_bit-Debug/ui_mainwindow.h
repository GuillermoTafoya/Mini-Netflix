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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
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
    QLabel *label;
    QPushButton *OPEN;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QListWidget *listWidget;
    QPushButton *RETURN;
    QPushButton *DELETE;
    QComboBox *comboBox;
    QPushButton *Refresh;
    QPushButton *Registrar;
    QPushButton *pushButton;
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
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(251, 50, 280, 110));
        OPEN = new QPushButton(centralwidget);
        OPEN->setObjectName(QString::fromUtf8("OPEN"));
        OPEN->setGeometry(QRect(270, 450, 80, 25));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(220, 220, 341, 191));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 339, 189));
        listWidget = new QListWidget(scrollAreaWidgetContents);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 341, 191));
        scrollArea->setWidget(scrollAreaWidgetContents);
        RETURN = new QPushButton(centralwidget);
        RETURN->setObjectName(QString::fromUtf8("RETURN"));
        RETURN->setGeometry(QRect(430, 450, 80, 25));
        DELETE = new QPushButton(centralwidget);
        DELETE->setObjectName(QString::fromUtf8("DELETE"));
        DELETE->setGeometry(QRect(450, 180, 80, 25));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 20, 151, 24));
        Refresh = new QPushButton(centralwidget);
        Refresh->setObjectName(QString::fromUtf8("Refresh"));
        Refresh->setGeometry(QRect(540, 180, 80, 25));
        Registrar = new QPushButton(centralwidget);
        Registrar->setObjectName(QString::fromUtf8("Registrar"));
        Registrar->setGeometry(QRect(170, 20, 80, 25));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 310, 80, 25));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionNew_Serie);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_Serie->setText(QCoreApplication::translate("MainWindow", "Nuevo", nullptr));
        actionNew_Season->setText(QCoreApplication::translate("MainWindow", "New Season", nullptr));
        actionNew_Chapter->setText(QCoreApplication::translate("MainWindow", "New Chapter", nullptr));
        actionNew_Movie->setText(QCoreApplication::translate("MainWindow", "New Movie", nullptr));
        label->setText(QString());
        OPEN->setText(QCoreApplication::translate("MainWindow", "OPEN", nullptr));
        RETURN->setText(QCoreApplication::translate("MainWindow", "RETURN", nullptr));
        DELETE->setText(QCoreApplication::translate("MainWindow", "DELETE", nullptr));
        Refresh->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        Registrar->setText(QCoreApplication::translate("MainWindow", "Registrar", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
