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
#include "Serie.h"


std::vector<std::variant<Capitulo,Pelicula>> listaCompleta;

using string = std::string;

//Pelicula AntMan = Pelicula("Antman", "https:/drive.google.com/file/d/1BoidnRTk4hAKqo5wFTxM4wYTBnWAoAx2/view?usp=sharing",
//        "Accion", 120, 4, "Un wey");

Pelicula AntMan = Pelicula("Antman", "https:/drive.google.com/file/d/1BoidnRTk4hAKqo5wFTxM4wYTBnWAoAx2/view?usp=sharing",
        "Accion", 120, 4, "Un wey");


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






}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_OPEN_clicked()
{
    AntMan.play();
}

