//  Naomi Estefanía Nieto Vega A01706095
//  Episodio.cpp
//  ProyectoIntegrador
//  21 de julio, 2020

#include <stdio.h>
#include <string>
#include <iostream>
#include "Episodio.h"

using namespace std;

Episodio::Episodio() {
    nombreEpisodio = " ";
    numeroEpisodio = 0;
    temporada = 0;
    calificacionEpisodio = 0;
}

Episodio::Episodio(string name, int chapter, int season) {
    nombreEpisodio = name;
    numeroEpisodio = chapter;
    temporada = season;
}

string Episodio::getNombre() {
    return nombreEpisodio;
}

int Episodio::getEpisodio() {
    return numeroEpisodio;
}

int Episodio::getTemporada() {
    return temporada;
}
int Episodio::getCalificacionEpisodio(){
    return calificacionEpisodio;
}
