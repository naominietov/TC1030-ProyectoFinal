//  Naomi Estefanía Nieto Vega A01706095
//  Pelicula.cpp
//  ProyectoIntegrador
//  21 de julio, 2020

#include <stdio.h>
#include <iostream>
#include "Pelicula.h"

using namespace std;

Pelicula::Pelicula():Video(){
    
}

Pelicula::Pelicula(string type, string name, string kind, string nominacion, int id, int punctuation, int year, int duration):Video(type, name, kind, id, punctuation, year, duration) {
    nominaciones = nominacion;
}

string Pelicula::getNombre() {
    return nombreVideo;
}

int Pelicula::getCalificacion() {
    return calificacion;
}

void Pelicula::mostrarDatos() {
    cout << "Type of video: " << tipoVideo << endl;
    cout << "ID: " << Id << endl;
    cout << "Title: " << nombreVideo << endl;
    cout << "Genre: " << genero << endl;
    cout << "Release year: " << anioLanzamiento << endl;
    cout << "Nominated: " << nominaciones << endl;
    cout << "Duration (minutes): " << duracion << endl;
    cout << "Score: " << calificacion << endl;
    cout << endl;
}


