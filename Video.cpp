//  Naomi Estefanía Nieto Vega A01706095
//  Video.cpp
//  ProyectoIntegrador
//  21 de julio, 2020

#include <stdio.h>
#include <iostream>
#include <ostream>
#include "Video.h"

using namespace std;

// Constructor 1
Video::Video() {
    tipoVideo = " ";
    nombreVideo = " ";
    genero = " ";
    Id = 0;
    calificacion = 0;
    anioLanzamiento = 0;
    duracion = 0;
}

// Constructor 2
Video::Video(string type, string name, string kind, int id, int punctuation, int year, int duration) {
    tipoVideo = type;
    nombreVideo = name;
    genero = kind;
    Id = id;
    calificacion = punctuation;
    anioLanzamiento = year;
    duracion = duration;
}

string Video::getNombre() {
    return nombreVideo;
}

string Video::getGenero() {
    return genero;
}

int Video::getId(){
    return Id;
}

int Video::getCalificacion(){
    return calificacion;
}

int Video::getDuracion() {
    return duracion;
}

void Video::calificaVideo(int calif_vid) {
    calificacion = calif_vid;
}

ostream & operator << (ostream &out, const Video &v) {
    out << " " << v.tipoVideo << " " << v.nombreVideo << endl;
    return out;
}
