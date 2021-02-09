//  Naomi Estefanía Nieto Vega A01706095
//  Episodio.h
//  ProyectoIntegrador
//  21 de julio, 2020

#ifndef Episodio_h
#define Episodio_h

#include <string>
#include <iostream>

using namespace std;

class Episodio {

private:
    string nombreEpisodio;
    int numeroEpisodio;
    int temporada;
    int calificacionEpisodio;

public:
    Episodio();
    Episodio(string, int, int);
    string getNombre();
    int getEpisodio();
    int getTemporada();
    int getCalificacionEpisodio();
};

#endif /* Episodio_h */
