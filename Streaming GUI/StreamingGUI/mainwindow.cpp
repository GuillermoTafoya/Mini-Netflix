#include "mainwindow.h"
#include "ui_mainwindow.h"

// QT
#include <QAbstractItemModel>
#include <QStringListModel>
#include <QPixmap>


#include <iostream>

// std
#include <vector>
#include <fstream>
#include <string>

// Windows
#include <windows.h>
#include <shellapi.h>


// include headers from boost
#include <boost/archive/binary_oarchive.hpp>
#include <boost/archive/binary_iarchive.hpp>
#include <boost/serialization/vector.hpp>
#include "boost/filesystem.hpp"

//Headers

#include "Contenedor.h"


//modals
#include "pelicularegistro.h"
#include "serieregistro.h"
#include "ui_pelicularegistro.h"
#include "ui_serieregistro.h"

#include "registrotemporada.h"
#include "ui_registrotemporada.h"

#include "capituloregistro.h"
#include "ui_capituloregistro.h"





using string = std::string;


std::vector<Contenedor> listaCompleta;
void fill(Ui::MainWindow &ui);
void reload(Ui::MainWindow &ui);
int selected = 0, idxSerie, idxTemporada;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    //this->setWindowIcon(QIcon("netflix-seeklogo.com.svg"));
    this->setWindowIcon(QIcon("E:/Dev/Streaming GUI/StreamingGUI/Assets/Icons/netflix.png"));
    ui->setupUi(this);

    this->setWindowTitle("Mini Netflix");

    QPixmap pix("E:/Dev/Streaming GUI/StreamingGUI/Assets/Icons/Metflix.png");

    //ui->label->setAlignment(Qt::AlignCenter);
    int w = ui->label->width(), h = ui->label->height();


    ui->label->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio)); //pix.scaled(250,250,Qt::KeepAspectRatio));

    //ui->listWidget->addItem("AntMan");

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

void fill(Ui::MainWindow &ui){
    ui.listWidget->clear();
    for (unsigned int i = 0; i<listaCompleta.size(); i++){
        if ( listaCompleta[i].type()==true){ // Se trata de una serie "E:\Dev\Streaming GUI\StreamingGUI\Assets\Icons\folder.png"
            QListWidgetItem *item = new QListWidgetItem(QIcon("E:/Dev/Streaming GUI/StreamingGUI/Assets/Icons/folder.png"),
                                                        QString::fromStdString (listaCompleta[i].getSerie()->getNombreDeSerie() ));

            ui.listWidget->addItem(item);



        } else{ // Se trata de una pelicula
            QListWidgetItem *item = new QListWidgetItem(QIcon("E:/Dev/Streaming GUI/StreamingGUI/Assets/Icons/icono pelicula.png"),
                                                        QString::fromStdString( listaCompleta[i].getPelicula()->getName() ));

            ui.listWidget->addItem(item);

        }
    }
}

void MainWindow::reload(){
    selected = 0;
    idxSerie = 0;
    idxTemporada = 0;


    std::ifstream ifs("data.dat");
    if (!ifs) {
        std::cout << "read error!" << '\n';

    }


    boost::archive::binary_iarchive in_arch(ifs); // no esta jalando



    in_arch >> listaCompleta;



    fill(*ui);

}



// int selected = 0, idxSerie, idxTemporada;



void MainWindow::on_OPEN_clicked()
{
if (ui->listWidget->currentRow() == -1){
    return;
}

 int index = ui->listWidget->currentRow();
    string txt;
 if (selected == 0){ // NO ha seleccionado una serie o pelicula

     if ( listaCompleta[index].type()==true){ // Se selecciona una serie
         ui->listWidget->clear();
         for ( int i = 0; i < listaCompleta[index].getSerie()->getTemporadasTotales(); i++){
             txt = "Temporada " + std::to_string(i);

             QListWidgetItem *item = new QListWidgetItem(QIcon("E:/Dev/Streaming GUI/StreamingGUI/Assets/Icons/folder.png"),
                                                         QString::fromStdString(txt));

             ui->listWidget->addItem(item);
         }
        selected = 1;
        idxSerie = index;

     } else{ // Se selecciona una pelicula

         listaCompleta[index].getPelicula()->play();

     }
 } else if(selected == 1){ // Se selecciono una temporada, mostrar capitulos

     ui->listWidget->clear();


     for (int i = 0; i < listaCompleta[idxSerie].getSerie()->getTemporada(index)->getCapitulosTotales(); i++){
        txt = listaCompleta[idxSerie].getSerie()->getTemporada(index)->getCapitulo(i).getName();
         QListWidgetItem *item = new QListWidgetItem(QIcon("E:/Dev/Streaming GUI/StreamingGUI/Assets/Icons/icono pelicula.png"),
                                                     QString::fromStdString(txt) );
         ui->listWidget->addItem(item);
     }
     selected = 2;
     idxTemporada = index;

 }
 else if(selected == 2){ // Se selecciono un capitulo

      listaCompleta[idxSerie].getSerie()->getTemporada(idxTemporada)->playCapitulo(index);

  }



}


void MainWindow::on_RETURN_clicked()
{


   if(selected == 1){
       fill(*ui);
       selected = 0;
       idxSerie = 0;
       idxTemporada = 0;

    }
    else if(selected == 2){

       ui->listWidget->clear();
       string txt;


       for ( int i = 0; i < listaCompleta[idxSerie].getSerie()->getTemporadasTotales(); i++){
           txt = "Temporada " + std::to_string(i);

           QListWidgetItem *item = new QListWidgetItem(QIcon("E:/Dev/Streaming GUI/StreamingGUI/Assets/Icons/folder.png"),
                                                       QString::fromStdString(txt));

           ui->listWidget->addItem(item);}


       selected = 1;

     }



}

void save(){
    //std::cout << "write data" << '\n';
    {
        std::ofstream ofs("data.dat");
        boost::archive::binary_oarchive out_arch(ofs);
        out_arch << listaCompleta;
    }

}

void MainWindow::on_DELETE_clicked()
{
    if (ui->listWidget->currentRow() == -1){
        std::cout << "invalid\n";
        return;
    }

     int index = ui->listWidget->currentRow();

        string txt;
     if (selected == 0){ // NO ha seleccionado una serie o pelicula
         std::cout << "acceder 0\n";

         listaCompleta.erase(listaCompleta.begin()+index);
         save();
         reload();
     } else if(selected == 1){ // Se selecciono una temporada, mostrar capitulos

        std::cout << "acceder 1\n";

         listaCompleta[idxSerie].getSerie()->eliminarTemporada(index+1);
         std::cout << "eliminado 1\n";
         save();
         reload();
         ui->listWidget->clear();


         for ( int i = 0; i < listaCompleta[idxSerie].getSerie()->getTemporadasTotales(); i++){
             txt = "Temporada " + std::to_string(i);

             QListWidgetItem *item = new QListWidgetItem(QIcon("E:/Dev/Streaming GUI/StreamingGUI/Assets/Icons/folder.png"),
                                                         QString::fromStdString(txt));

             ui->listWidget->addItem(item);
         }


     }
     else if(selected == 2){ // Se selecciono un capitulo
           std::cout << "acceder 2\n";

          listaCompleta[idxSerie].getSerie()->getTemporada(idxTemporada)->eliminarCapitulo(index+1);
          save();
          reload();
          ui->listWidget->clear();

          for (int i = 0; i < listaCompleta[idxSerie].getSerie()->getTemporada(idxTemporada)->getCapitulosTotales(); i++){
             txt = listaCompleta[idxSerie].getSerie()->getTemporada(idxTemporada)->getCapitulo(i).getName();
              QListWidgetItem *item = new QListWidgetItem(QIcon("E:/Dev/Streaming GUI/StreamingGUI/Assets/Icons/icono pelicula.png"),
                                                          QString::fromStdString(txt) );
              ui->listWidget->addItem(item);
          }

      }



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


void MainWindow::on_Registrar_clicked()
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

    if(ui->comboBox->currentText()=="Temporada"){
        //SerieRegistro serieregistro;
        //serieregistro.setModal(true);
        //serieregistro.exec();
        if (ui->listWidget->currentRow() == -1){
            return;
        }

         int index = ui->listWidget->currentRow();

         if (selected == 0){ // NO ha seleccionado una serie o pelicula
             idxSerie = index;

             if ( listaCompleta[index].type()==true){ // Se selecciona una serie
                 //Registrar temporada
                 RegistroTemporada RegistroTemporada;
                 RegistroTemporada.setModal(true);
                 RegistroTemporada.exec();
            }
        }
    }

    if(ui->comboBox->currentText()=="Capitulo"){
        //SerieRegistro serieregistro;
        //serieregistro.setModal(true);
        //serieregistro.exec();
        int index = ui->listWidget->currentRow();

        if (selected == 1){
            idxTemporada = index;

            CapituloRegistro CapituloRegistro;
            CapituloRegistro.setModal(true);
            CapituloRegistro.exec();
       }
    }




}


void MainWindow::on_Refresh_clicked()
{
    reload();
}






void SerieRegistro::on_GuardarSerie_clicked()
{
    QString name = ui->lineEdit->text();
    QString genero = ui->lineEdit_2->text();
     std::string names = name.toUtf8().constData();
     std::string generos = genero.toUtf8().constData();
     Serie ser = Serie();
     ser.setNombreDeSerie(names);
     ser.setGeneroDeSerie(generos);
         Contenedor cont(ser);
             listaCompleta.push_back(cont);
             std::ofstream ofs("data.dat");
             boost::archive::binary_oarchive out_arch(ofs);
             out_arch << listaCompleta;
}

void RegistroTemporada::on_RegistrarTemporada_clicked()
{
    Temporada temp;
    temp.setNumeroDeTemporada(listaCompleta[idxSerie].getSerie()->getTemporadasTotales());
    temp.setSerieALaQuePertenece(listaCompleta[idxSerie].getSerie()->getNombreDeSerie());

    listaCompleta[idxSerie].getSerie()->aniadirTemporada(temp);


    save();



}


void CapituloRegistro::on_GuardarCapitulo_clicked()
{

QString name = ui->lineEdit->text();
std::string names = name.toUtf8().constData();
QString genero = ui->genero->text();
std::string generos = genero.toUtf8().constData();
QString url = ui->url->text();
std::string urls = url.toUtf8().constData();
QString duracion = ui->duracion->text();
std::string duracions = duracion.toUtf8().constData();
double rating = ui->rating->value();



Capitulo cap(names, urls,generos, rating, std::stoi(duracions),
             listaCompleta[idxSerie].getSerie()->getTemporada(idxTemporada)->getCapitulosTotales()+1,
             idxTemporada,listaCompleta[idxSerie].getSerie()->getNombreDeSerie());

    listaCompleta[idxSerie].getSerie()->getTemporada(idxTemporada)->aniadirCapitulo(cap);


     save();



}

