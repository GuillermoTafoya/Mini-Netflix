#include "pelicularegistro.h"
#include "ui_pelicularegistro.h"

#include <QFileDialog>

PeliculaRegistro::PeliculaRegistro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PeliculaRegistro)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("E:/Dev/Streaming GUI/StreamingGUI/Assets/Icons/netflix.png"));
    this->setWindowTitle("Registrar Pelicula");
}

PeliculaRegistro::~PeliculaRegistro()
{
    delete ui;
}

void PeliculaRegistro::on_LocalPath_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this);
    ui->url->setText(fileName);
}

