#include "pelicularegistro.h"
#include "ui_pelicularegistro.h"
#include <iostream>
#include <mainwindow.h>

using string = std::string;

PeliculaRegistro::PeliculaRegistro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PeliculaRegistro)
{
    //this->setWindowIcon(QIcon("netflix-seeklogo.com.svg"));
    this->setWindowIcon(QIcon("C:/Users/rogel/Desktop/MiniNetfix/MiniNetflix/Assets/Icons/netflix.png"));

    ui->setupUi(this);


}



PeliculaRegistro::~PeliculaRegistro()
{
    delete ui;
}




