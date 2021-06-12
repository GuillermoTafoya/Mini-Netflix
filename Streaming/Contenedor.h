#pragma once
#include "Serie.h"
#include "Pelicula.h"

class Contenedor {
private:
	bool isSerie = false;
	Serie contenidoSerie;
	Pelicula contenidoPelicula;

	friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive& ar, const unsigned int version)
	{

		ar& isSerie;
		ar& contenidoSerie;
		ar& contenidoPelicula;

	}
public:

	Contenedor() {};
	Contenedor(Serie s) {
		this->isSerie = true;
		this->contenidoSerie = s;
	}

	Contenedor(Pelicula p) {
		this->isSerie = false;
		this->contenidoPelicula = p;
	}


	Serie getSerie() {
		if (this->isSerie) {
			return this->contenidoSerie;
		}
	}

	Pelicula getPelicula() {
		if (!this->isSerie) {
			return this->contenidoPelicula;
		}
	}
	void setContenido(Serie s) {
		this->isSerie = true;
		this->contenidoSerie = s;
	}
	void setContenido(Pelicula p) {
		this->isSerie = false;
		this->contenidoPelicula = p;
	}
};

