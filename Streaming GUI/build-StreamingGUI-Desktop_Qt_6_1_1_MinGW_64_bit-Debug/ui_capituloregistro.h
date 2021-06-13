/********************************************************************************
** Form generated from reading UI file 'capituloregistro.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPITULOREGISTRO_H
#define UI_CAPITULOREGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_CapituloRegistro
{
public:
    QPushButton *GuardarCapitulo;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *genero;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *duracion;
    QLabel *label_7;
    QLineEdit *url;
    QSlider *rating;
    QToolButton *toolButton;

    void setupUi(QDialog *CapituloRegistro)
    {
        if (CapituloRegistro->objectName().isEmpty())
            CapituloRegistro->setObjectName(QString::fromUtf8("CapituloRegistro"));
        CapituloRegistro->resize(238, 246);
        GuardarCapitulo = new QPushButton(CapituloRegistro);
        GuardarCapitulo->setObjectName(QString::fromUtf8("GuardarCapitulo"));
        GuardarCapitulo->setGeometry(QRect(110, 200, 80, 21));
        lineEdit = new QLineEdit(CapituloRegistro);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 20, 113, 21));
        label = new QLabel(CapituloRegistro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 47, 13));
        genero = new QLineEdit(CapituloRegistro);
        genero->setObjectName(QString::fromUtf8("genero"));
        genero->setGeometry(QRect(80, 50, 113, 21));
        label_2 = new QLabel(CapituloRegistro);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 47, 13));
        label_3 = new QLabel(CapituloRegistro);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 110, 47, 13));
        label_4 = new QLabel(CapituloRegistro);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 80, 47, 13));
        duracion = new QSpinBox(CapituloRegistro);
        duracion->setObjectName(QString::fromUtf8("duracion"));
        duracion->setGeometry(QRect(80, 80, 42, 22));
        label_7 = new QLabel(CapituloRegistro);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 150, 51, 16));
        url = new QLineEdit(CapituloRegistro);
        url->setObjectName(QString::fromUtf8("url"));
        url->setGeometry(QRect(80, 150, 113, 21));
        rating = new QSlider(CapituloRegistro);
        rating->setObjectName(QString::fromUtf8("rating"));
        rating->setGeometry(QRect(80, 110, 111, 20));
        rating->setOrientation(Qt::Horizontal);
        toolButton = new QToolButton(CapituloRegistro);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(200, 150, 28, 23));

        retranslateUi(CapituloRegistro);

        QMetaObject::connectSlotsByName(CapituloRegistro);
    } // setupUi

    void retranslateUi(QDialog *CapituloRegistro)
    {
        CapituloRegistro->setWindowTitle(QCoreApplication::translate("CapituloRegistro", "Registro de Capitulos", nullptr));
        GuardarCapitulo->setText(QCoreApplication::translate("CapituloRegistro", "Guardar", nullptr));
        lineEdit->setText(QString());
        label->setText(QCoreApplication::translate("CapituloRegistro", "Nombre:", nullptr));
        genero->setText(QString());
        label_2->setText(QCoreApplication::translate("CapituloRegistro", "Genero:", nullptr));
        label_3->setText(QCoreApplication::translate("CapituloRegistro", "Rating:", nullptr));
        label_4->setText(QCoreApplication::translate("CapituloRegistro", "Duracion:", nullptr));
        label_7->setText(QCoreApplication::translate("CapituloRegistro", "URL/PATH:", nullptr));
        url->setText(QString());
        toolButton->setText(QCoreApplication::translate("CapituloRegistro", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CapituloRegistro: public Ui_CapituloRegistro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPITULOREGISTRO_H
