#include "capituloregistro.h"
#include "ui_capituloregistro.h"
#include <QFileDialog>




CapituloRegistro::CapituloRegistro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CapituloRegistro)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("E:/Dev/Streaming GUI/StreamingGUI/Assets/Icons/netflix.png"));
    this->setWindowTitle("Registrar Serie");
}

CapituloRegistro::~CapituloRegistro()
{
    delete ui;
}


void CapituloRegistro::on_toolButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this);
    ui->url->setText(fileName);

}

