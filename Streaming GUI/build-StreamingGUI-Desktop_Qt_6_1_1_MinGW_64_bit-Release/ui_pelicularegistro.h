/********************************************************************************
** Form generated from reading UI file 'pelicularegistro.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PELICULAREGISTRO_H
#define UI_PELICULAREGISTRO_H

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

class Ui_PeliculaRegistro
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *genero;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *reparto;
    QSpinBox *duracion;
    QLabel *label_7;
    QLineEdit *url;
    QSlider *rating;
    QToolButton *LocalPath;

    void setupUi(QDialog *PeliculaRegistro)
    {
        if (PeliculaRegistro->objectName().isEmpty())
            PeliculaRegistro->setObjectName(QString::fromUtf8("PeliculaRegistro"));
        PeliculaRegistro->resize(258, 257);
        pushButton = new QPushButton(PeliculaRegistro);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 220, 80, 21));
        lineEdit = new QLineEdit(PeliculaRegistro);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 20, 113, 21));
        label = new QLabel(PeliculaRegistro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 47, 13));
        genero = new QLineEdit(PeliculaRegistro);
        genero->setObjectName(QString::fromUtf8("genero"));
        genero->setGeometry(QRect(100, 50, 113, 21));
        label_2 = new QLabel(PeliculaRegistro);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 47, 13));
        label_3 = new QLabel(PeliculaRegistro);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 110, 47, 13));
        label_4 = new QLabel(PeliculaRegistro);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 80, 47, 13));
        label_5 = new QLabel(PeliculaRegistro);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 140, 47, 13));
        reparto = new QLineEdit(PeliculaRegistro);
        reparto->setObjectName(QString::fromUtf8("reparto"));
        reparto->setGeometry(QRect(100, 140, 113, 21));
        duracion = new QSpinBox(PeliculaRegistro);
        duracion->setObjectName(QString::fromUtf8("duracion"));
        duracion->setGeometry(QRect(100, 80, 42, 22));
        label_7 = new QLabel(PeliculaRegistro);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 170, 71, 16));
        url = new QLineEdit(PeliculaRegistro);
        url->setObjectName(QString::fromUtf8("url"));
        url->setGeometry(QRect(100, 170, 113, 21));
        rating = new QSlider(PeliculaRegistro);
        rating->setObjectName(QString::fromUtf8("rating"));
        rating->setGeometry(QRect(100, 110, 111, 20));
        rating->setOrientation(Qt::Horizontal);
        LocalPath = new QToolButton(PeliculaRegistro);
        LocalPath->setObjectName(QString::fromUtf8("LocalPath"));
        LocalPath->setGeometry(QRect(220, 170, 28, 23));

        retranslateUi(PeliculaRegistro);

        QMetaObject::connectSlotsByName(PeliculaRegistro);
    } // setupUi

    void retranslateUi(QDialog *PeliculaRegistro)
    {
        PeliculaRegistro->setWindowTitle(QCoreApplication::translate("PeliculaRegistro", "Registro de Peliculas", nullptr));
        pushButton->setText(QCoreApplication::translate("PeliculaRegistro", "Guardar", nullptr));
        lineEdit->setText(QString());
        label->setText(QCoreApplication::translate("PeliculaRegistro", "Nombre:", nullptr));
        genero->setText(QString());
        label_2->setText(QCoreApplication::translate("PeliculaRegistro", "Genero:", nullptr));
        label_3->setText(QCoreApplication::translate("PeliculaRegistro", "Rating:", nullptr));
        label_4->setText(QCoreApplication::translate("PeliculaRegistro", "Duracion:", nullptr));
        label_5->setText(QCoreApplication::translate("PeliculaRegistro", "Reparto:", nullptr));
        reparto->setText(QString());
        label_7->setText(QCoreApplication::translate("PeliculaRegistro", "URL/PATH:", nullptr));
        url->setText(QString());
        LocalPath->setText(QCoreApplication::translate("PeliculaRegistro", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PeliculaRegistro: public Ui_PeliculaRegistro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PELICULAREGISTRO_H
