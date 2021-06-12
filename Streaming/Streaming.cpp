// Streaming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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


#include <stdlib.h>
#include "LinkedList.h"
#include "Contenedor.h"
using string = std::string;



std::string pathString = "assets";
boost::filesystem::path p = boost::filesystem::current_path(); // Construct the path from a string.
//string boost::filesystem::absolute(p)

int main()
{
    
    Pelicula AntMan = Pelicula("Antman", "https://drive.google.com/file/d/1BoidnRTk4hAKqo5wFTxM4wYTBnWAoAx2/view?usp=sharing",
        "Accion", 120, 4, "Un wey");


    
    string src = "E:\\Dev\\Streaming\\Streaming\\assets\\";
    Capitulo video1 = Capitulo("Paradoja del abuelo", src + "Solution to the Grandfather Paradox.mp4", "Fisica" ,2.45, 4, 1,1,"Fisica en un minuto");
    Capitulo video2 = Capitulo("Privacidad", src + "When It's OK to Violate Privacy.mp4", "Fisica", 2.45, 4, 1, 1, "Fisica en un minuto");
    
    video1.calificar(4.7);
    video1.calificar(2.5);

    Temporada prueba = Temporada();
    prueba.setNumeroDeTemporada(0);

    prueba.setSerieALaQuePertenece("Fisica: la serie");

    prueba.aniadirCapitulo(video1);
    prueba.aniadirCapitulo(video2);

    Serie Fisica = Serie();

    Fisica.setNombreDeSerie("Fisica");

    Fisica.aniadirTemoporada(prueba);




    std::vector<Contenedor> listaCompleta;

    listaCompleta.push_back(Contenedor(Fisica));
    listaCompleta.push_back(Contenedor(AntMan));
    
    std::cout << "write data" << '\n';
    {
        std::ofstream ofs("data.dat");
        boost::archive::binary_oarchive out_arch(ofs);
        out_arch << listaCompleta;
    }

    std::cout << "read data" << '\n';
    {
        std::ifstream ifs("data.dat");
        if (!ifs) {
            std::cout << "read error!" << '\n';
            return 1;
        }
        Temporada prueba2;
        boost::archive::binary_iarchive in_arch(ifs);

        std::vector<Contenedor>  listaCompletaLeida;

        in_arch >> listaCompletaLeida;


        Serie FisicaLeida = listaCompletaLeida[0].getSerie();

        FisicaLeida.getTemporada(0).playCapitulo("Paradoja del abuelo");



        
    }

    


    return 0;
}