#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QAbstractItemModel>
#include <QStringListModel>
#include <QPixmap>

#include <iostream>

// std
#include <vector>
#include <fstream>
#include <string>

// c++ 17
#include <variant>

// Windows
#include <windows.h>
#include <shellapi.h>


// include headers from boost
#include <boost/archive/binary_oarchive.hpp>
#include <boost/archive/binary_iarchive.hpp>
#include <boost/serialization/vector.hpp>
#include "boost/filesystem.hpp"

//Headers
#include "Video.h"
#include "Pelicula.h"
#include "Capitulo.h"
#include "Temporada.h"
#include "Contenedor.h"

#include <windows.h>
#include <shellapi.h>

///modals
#include "pelicularegistro.h"
#include "ui_pelicularegistro.h"
#include "serieregistro.h"

std::vector<Contenedor> listaCompleta;


using string = std::string;
void fill(Ui::MainWindow &ui);
void reload(Ui::MainWindow &ui);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //this->setWindowIcon(QIcon("netflix-seeklogo.com.svg"));
    this->setWindowIcon(QIcon("C:/Users/rogel/Desktop/MiniNetfix/MiniNetflix/Assets/Icons/netflix.png"));

    ui->setupUi(this);


    this->setWindowTitle("Mini Netflix");

    QPixmap pix("C:/Users/rogel/Desktop/MiniNetfix/MiniNetflix/Assets/Icons/Metflix.png");
    //ui->label->setAlignment(Qt::AlignCenter);
    int w = ui->label->width(), h = ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio)); //pix.scaled(250,250,Qt::KeepAspectRatio));


    ui->comboBox->addItem("Pelicula");
    ui->comboBox->addItem("Capitulo");
    ui->comboBox->addItem("Temporada");
    ui->comboBox->addItem("Serie");


        reload();
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{

    if(ui->comboBox->currentText()=="Pelicula"){
    PeliculaRegistro pelicularegistro;
    pelicularegistro.setModal(true);
    pelicularegistro.exec();
    }

    if(ui->comboBox->currentText()=="Serie"){
    SerieRegistro serieregistro;
    serieregistro.setModal(true);
    serieregistro.exec();
    }

}

void fill(Ui::MainWindow &ui){
    ui.listWidget->clear();
    for (unsigned int i = 0; i<listaCompleta.size(); i++){
        if ( listaCompleta[i].type()==true){ // Se trata de una serie

            ui.listWidget->addItem(QString::fromStdString(listaCompleta[i].getSerie().getNombreDeSerie()));
            std::cout<< "detecto una serie";


        } else{ // Se trata de una pelicula

            ui.listWidget->addItem(QString::fromStdString( listaCompleta[i].getPelicula().getName() ));

        }
    }

}




int selected = 0, idxSerie, idxTemporada;


void MainWindow::on_OPEN_clicked()
{

 int index = ui->listWidget->currentRow();
    string txt;
 if (selected == 0){ // NO ha seleccionado una serie o pelicula

     if ( listaCompleta[index].type()==true){ // Se selecciona una serie
         ui->listWidget->clear();
         for ( int i = 0; i < listaCompleta[index].getSerie().getTemporadasTotales(); i++){
             txt = "Temporada " + std::to_string(i);
             ui->listWidget->addItem(QString::fromStdString(txt));
         }
        selected = 1;
        idxSerie = index;

     } else{ // Se selecciona una pelicula

         listaCompleta[index].getPelicula().play();

     }
 } else if(selected == 1){ // Se selecciono una serie

     ui->listWidget->clear();
     for (int i = 0; i < listaCompleta[idxSerie].getSerie().getTemporada(index).getCapitulosTotales(); i++){
         txt = listaCompleta[idxSerie].getSerie().getTemporada(index).getCapitulo(i).getName();
         ui->listWidget->addItem(QString::fromStdString(txt));
     }
     selected = 2;

 }
 else if(selected == 2){ // Se selecciono un capitulo

      ui->listWidget->clear();
      for (unsigned int i = 0; i < listaCompleta.size(); i++){
          txt = "Temporada " + std::to_string(i);
          ui->listWidget->addItem(QString::fromStdString(txt));
      }
  }

}


void MainWindow::reload(){

        std::ifstream ifs("data.dat");
        if (!ifs) {
            std::cout << "read error!" << '\n';

        }

        boost::archive::binary_iarchive in_arch(ifs); // no esta jalando
        in_arch >> listaCompleta;
        fill(*ui);

    }




 void PeliculaRegistro::on_pushButton_clicked()
    {

    QString name = ui->lineEdit->text();
    std::string names = name.toUtf8().constData();
    QString genero = ui->genero->text();
    std::string generos = genero.toUtf8().constData();
    QString url = ui->url->text();
    std::string urls = url.toUtf8().constData();
    QString reparto = ui->reparto->text();
    std::string repartos = reparto.toUtf8().constData();
    QString duracion = ui->duracion->text();
    std::string duracions = duracion.toUtf8().constData();
    double rating = ui->rating->value();


    Pelicula peli(names, urls,generos, rating, std::stoi(duracions), repartos);


     Contenedor cont (peli);

         listaCompleta.push_back(cont);
         std::ofstream ofs("data.dat");
         boost::archive::binary_oarchive out_arch(ofs);
         out_arch << listaCompleta;



    }



void MainWindow::on_pushButton_2_clicked()
{
    reload();
}

