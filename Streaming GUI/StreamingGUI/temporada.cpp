#include "temporada.h"
#include "ui_temporada.h"

Temporada::Temporada(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Temporada)
{
    ui->setupUi(this);
}

Temporada::~Temporada()
{
    delete ui;
}
