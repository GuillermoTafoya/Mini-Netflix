#pragma once
#include "Serie.h"
#include "Pelicula.h"

class Contenedor {
private:
	bool isSerie = false;
	Serie contenidoSerie;
	Pelicula contenidoPelicula;
public:
	template <typename T>
	T getContenido() {
		if (this->isSerie) {
			return this->contenidoSerie;
		}
		else {
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

