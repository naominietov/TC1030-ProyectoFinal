//  Naomi Estefanía Nieto Vega A01706095
//  Serie.cpp
//  ProyectoIntegrador
//  21 de julio, 2020

#include <stdio.h>
#include "Serie.h"
#include "Episodio.h"
#include <iostream>

using namespace std;

Serie::Serie():Video() {
    cantEpisodios = 0;
    episodio = Episodio();
}

Serie::Serie(string type, string name, string kind, string chapterName, int number, int temp, int episodes, int id,
             int punctuation, int year, int duration):Video(type, name, kind, id, punctuation, year, duration) {
    
    cantEpisodios = episodes;
    episodio = Episodio(chapterName, number, temp);
}

void Serie::mostrarDatos() {
    cout << endl;
    cout << "Type of video: " << tipoVideo << endl;
    cout << "ID: " << Id << endl;
    cout << "Title: " << nombreVideo << endl;
    cout << "Episode title: " << episodio.getNombre() << endl;
    cout << "Chapter number: " << episodio.getEpisodio() << endl;
    cout << "Season: " << episodio.getTemporada() << endl;
    cout << "Quantity of episodes: " << cantEpisodios << endl;
    cout << "Genre: " << genero << endl;
    cout << "Release year: " << anioLanzamiento << endl;
    cout << "Duration (minutes): " << duracion << endl;
    cout << "Score: " << calificacion << endl;
    cout << endl;
}


