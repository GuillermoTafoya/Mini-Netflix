#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QAbstractItemModel>
#include <QStringListModel>

#include <iostream>
// std
#include <vector>
#include <fstream>
#include <string>
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
#include "Serie.h"

using string = std::string;

//Pelicula AntMan = Pelicula("Antman", "https:/drive.google.com/file/d/1BoidnRTk4hAKqo5wFTxM4wYTBnWAoAx2/view?usp=sharing",
//        "Accion", 120, 4, "Un wey");

Pelicula AntMan = Pelicula("Antman", "E:/Dev/Streaming/Streaming/assets/When It's OK to Violate Privacy.mp4",
        "Accion", 120, 4, "Un wey");

int prueba = 0;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_PlayButton_clicked()
{

    AntMan.play();



}


void MainWindow::on_Select_clicked()
{
}





