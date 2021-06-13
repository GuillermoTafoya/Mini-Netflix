/********************************************************************************
** Form generated from reading UI file 'registrotemporada.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTROTEMPORADA_H
#define UI_REGISTROTEMPORADA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegistroTemporada
{
public:
    QLabel *label;
    QPushButton *RegistrarTemporada;

    void setupUi(QDialog *RegistroTemporada)
    {
        if (RegistroTemporada->objectName().isEmpty())
            RegistroTemporada->setObjectName(QString::fromUtf8("RegistroTemporada"));
        RegistroTemporada->resize(154, 163);
        label = new QLabel(RegistroTemporada);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 73, 21));
        RegistrarTemporada = new QPushButton(RegistroTemporada);
        RegistrarTemporada->setObjectName(QString::fromUtf8("RegistrarTemporada"));
        RegistrarTemporada->setGeometry(QRect(40, 70, 73, 21));

        retranslateUi(RegistroTemporada);

        QMetaObject::connectSlotsByName(RegistroTemporada);
    } // setupUi

    void retranslateUi(QDialog *RegistroTemporada)
    {
        RegistroTemporada->setWindowTitle(QCoreApplication::translate("RegistroTemporada", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RegistroTemporada", "CONFIRMAR", nullptr));
        RegistrarTemporada->setText(QCoreApplication::translate("RegistroTemporada", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistroTemporada: public Ui_RegistroTemporada {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTROTEMPORADA_H
