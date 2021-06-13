/********************************************************************************
** Form generated from reading UI file 'serieregistro.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIEREGISTRO_H
#define UI_SERIEREGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SerieRegistro
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *GuardarSerie;
    QLineEdit *lineEdit_2;
    QLabel *label_2;

    void setupUi(QDialog *SerieRegistro)
    {
        if (SerieRegistro->objectName().isEmpty())
            SerieRegistro->setObjectName(QString::fromUtf8("SerieRegistro"));
        SerieRegistro->resize(241, 136);
        label = new QLabel(SerieRegistro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 47, 13));
        lineEdit = new QLineEdit(SerieRegistro);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 20, 113, 21));
        GuardarSerie = new QPushButton(SerieRegistro);
        GuardarSerie->setObjectName(QString::fromUtf8("GuardarSerie"));
        GuardarSerie->setGeometry(QRect(140, 90, 80, 21));
        lineEdit_2 = new QLineEdit(SerieRegistro);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 50, 113, 21));
        label_2 = new QLabel(SerieRegistro);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 47, 13));

        retranslateUi(SerieRegistro);

        QMetaObject::connectSlotsByName(SerieRegistro);
    } // setupUi

    void retranslateUi(QDialog *SerieRegistro)
    {
        SerieRegistro->setWindowTitle(QCoreApplication::translate("SerieRegistro", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SerieRegistro", "Nombre:", nullptr));
        GuardarSerie->setText(QCoreApplication::translate("SerieRegistro", "Guardar", nullptr));
        label_2->setText(QCoreApplication::translate("SerieRegistro", "Genero", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerieRegistro: public Ui_SerieRegistro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIEREGISTRO_H
