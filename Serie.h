//  Naomi Estefanía Nieto Vega A01706095
//  Serie.h
//  ProyectoIntegrador
//  21 de julio, 2020

#ifndef Serie_h
#define Serie_h

#include "Episodio.h"
#include "Video.h"

class Serie : public Video {

private:
    int cantEpisodios;
    Episodio episodio;

public:
    Serie();
    Serie(string, string, string, string, int, int, int, int, int, int, int);
    void mostrarDatos();
    
};

#endif /* Serie_h */
