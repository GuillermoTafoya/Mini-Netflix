#pragma once
#include <iostream>

using string = std::string;

class Video {
protected:
    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive& ar, const unsigned int version)
    {
        ar& name;
        ar& genero;
        ar& duracion;
        ar& rating;
        ar& ratingAcumulado;
        ar& usuariosCalificados;
        ar& path;
    }
    string name;
    string genero;
    float duracion;
    float rating;
    float ratingAcumulado;
    int usuariosCalificados;
    string path;
public:

    Video(string Nombre, string Path, string Genero, float Duracion, float Rating);
    Video(string Nombre, string Path, string Genero, float Duracion);
    Video(){};

    int getUsuariosCalificados();
    void calificar(float);

    string getName();
    void setName(string);

    float getRating();

    float getDuracion();
    void setDuracion(float);

    void play();
    void describe();
};

Video::Video(string Nombre, string Path, string Genero, float Duracion) {
    this->name = Nombre;
    this->path = Path;
    this->duracion = Duracion;
    this->rating = 0;
    this->genero = Genero;  
    this->ratingAcumulado = 0;
    this->usuariosCalificados = 0;
}

Video::Video(string Nombre, string Path, string Genero, float Duracion, float Rating) {
    this->name = Nombre;
    this->path = Path;
    this->duracion = Duracion;
    this->rating = Rating;
    this->genero = Genero;
    this->ratingAcumulado = Rating;
    this->usuariosCalificados = 1;
}

void Video::play() {
    if (this->path[1] == ':') {
        string path_local = "\"\"" + this->path + "\"\"";
        const char* filename = path_local.c_str();
        system(filename);
    }
    else {
        std::wstring stemp = std::wstring(this->path.begin(), this->path.end());
        LPCWSTR sw = stemp.c_str();
        ShellExecute(0, 0, sw, 0, 0, SW_SHOW);
    }
    
}

int Video::getUsuariosCalificados() {
    return this->usuariosCalificados;
}

float Video::getRating() {
    return this->rating;
}


void Video::calificar(float Rating) {
    this->usuariosCalificados++;
    this->ratingAcumulado += Rating;
    this->rating = this->ratingAcumulado / this->usuariosCalificados;

}

string Video::getName() {
    return this->name;
}

void Video::setName(string Name) {
    this->name = Name;
}

float Video::getDuracion() {
    return this->duracion;
}

void Video::setDuracion(float Duracion) {
        this->duracion = Duracion;
}

void Video::describe() {
    std::cout <<
        "Nombre:\t\t" << this->name << '\n' <<
        "Duracion:\t" << this->duracion << '\n' <<
        "Genero:\t\t" << this->genero << '\n' <<
        "Rating:\t\t" << this->rating << '\n' << 
        "Calificado por:\t" << this->usuariosCalificados << '\n';
    ;
    ;
}


