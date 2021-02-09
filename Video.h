//  Naomi Estefanía Nieto Vega A01706095
//  Video.h
//  ProyectoIntegrador
//  21 de julio, 2020

#ifndef Video_h
#define Video_h
#include <iostream>
#include <ostream>

using namespace std;

class Video {

protected:
    string tipoVideo;
    string nombreVideo;
    string genero;
    int Id;
    int calificacion;
    int anioLanzamiento;
    int duracion;
    
public:
    Video();
    Video(string, string, string, int, int, int, int);
    string getNombre();
    string getGenero();
    int getId();
    int getCalificacion();
    int getDuracion();
    void calificaVideo(int);
    virtual void mostrarDatos() = 0;
    friend ostream & operator << (ostream &, const Video &v);
};

#endif /* Video_h */
