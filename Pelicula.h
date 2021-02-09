//  Naomi Estefanía Nieto Vega A01706095
//  Pelicula.h
//  ProyectoIntegrador
//  21 de julio, 2020

#ifndef Pelicula_h
#define Pelicula_h

#include "Video.h"

class Pelicula : public Video {

private:
    string nominaciones;

public:
    Pelicula();
    Pelicula(string, string, string, string, int, int, int, int);
    string getNombre();
    int getCalificacion();
    void mostrarDatos();
};

#endif /* Pelicula_h */
