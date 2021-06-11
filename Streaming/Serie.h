#pragma once
#include "Temporada.h"

class Serie{

	int duracionDeLaSerie, temporadasTotales;

	float ratingDeLaSerie;

	std::vector <Temporada> TemporadasDeLaSerie;

	string generoDeLaSerie, nombreDeLaSerie;

	friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive& ar, const unsigned int version)
	{

		ar& TemporadasDeLaSerie;
		ar& ratingDeLaSerie;
		ar& duracionDeLaSerie;
		ar& temporadasTotales;
		ar& generoDeLaSerie;

	}
public:
	Serie() {};

	Temporada getTemporada(int);

	void aniadirTemoporada(Temporada nuevo);
	void eliminarTemporada(int n);

	void update();

	void describe();

	int getTemporadasTotales();
	int getDuracionSerie();
	int getRatingSerie();

	void setTemporadasTotales();
	void setDuracionSerie();
	void setRatingSerie();
	void setNombreDeSerie(string);

};

Temporada Serie::getTemporada(int n) {
	return this->TemporadasDeLaSerie[n];
}


int Serie::getTemporadasTotales() {
	return this->temporadasTotales;
}
int Serie::getDuracionSerie() {
	return this->duracionDeLaSerie;
}
int Serie::getRatingSerie() {
	return this->ratingDeLaSerie;
}

void Serie::setTemporadasTotales() {
	this->temporadasTotales = this->TemporadasDeLaSerie.size();
}

void Serie::setRatingSerie() {  
	float runningSum = 0;
	int size = this->TemporadasDeLaSerie.size();
	for (int i = 0; i < size; i++) {
		runningSum += this->TemporadasDeLaSerie[i].getRatingTemporada();
	}

	this->ratingDeLaSerie = runningSum / size;
}

void Serie::setNombreDeSerie(string name) {
	this->nombreDeLaSerie = name;
}
void Serie::setDuracionSerie() {
	float runningSum = 0;
	int size = this->TemporadasDeLaSerie.size();
	for (int i = 0; i < size; i++) {
		runningSum += this->TemporadasDeLaSerie[i].getDuracionTemporada();
	}

	this->duracionDeLaSerie = runningSum;
}

void Serie::update() {
	this->setTemporadasTotales();
	this->setRatingSerie();
	this->setDuracionSerie();
}

void Serie::aniadirTemoporada(Temporada nuevo) {
	this->TemporadasDeLaSerie.push_back(nuevo);
	this->update();
}

void Serie::eliminarTemporada(int n) {
	this->TemporadasDeLaSerie.erase(this->TemporadasDeLaSerie.begin() + n - 1);
	this->update();
}

void Serie::describe() {
	std::cout <<
		"Nombre:\t" << this->nombreDeLaSerie << '\n' <<
		"Temporadas:\t" << this->temporadasTotales << '\n' <<
		"Genero:\t" << this->generoDeLaSerie << '\n' <<
		"Rating:\t\t" << this->ratingDeLaSerie << '\n' <<
		"Duracion:\t" << this->duracionDeLaSerie ;
}
