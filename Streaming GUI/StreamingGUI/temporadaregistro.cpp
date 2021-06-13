#include "temporadaregistro.h"
#include "ui_temporadaregistro.h"

TemporadaRegistro::TemporadaRegistro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TemporadaRegistro)
{
    ui->setupUi(this);
}

TemporadaRegistro::~TemporadaRegistro()
{
    delete ui;
}
