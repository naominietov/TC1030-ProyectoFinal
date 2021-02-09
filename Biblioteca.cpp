//  Naomi Estefanía Nieto Vega A01706095
//  Biblioteca.cpp
//  ProyectoIntegrador
//  Verano Junio - Julio 2020

#include <stdio.h>
#include <strings.h>
#include <algorithm>
#include "Biblioteca.h"
#include "Video.h"
#include "Pelicula.h"
#include "Serie.h"


Biblioteca::Biblioteca() {
    
    /* Peliculas disponibles */
    
    Pelicula film1 = Pelicula("Movie","Grown Ups","Comedy","Teen Choice Award -Best Actor-",0001,4,2010,102);
    Pelicula film2 = Pelicula("Movie","The Proposal","Romantic","Teen Choice Award -Best Actress-",0002,5,2009,108);
    Pelicula film3 = Pelicula("Movie","Shrek","Animation","N/A",0003,5,2001,95);
    Pelicula film4 = Pelicula("Movie","Baby Driver","Action","N/A",0004,3,2017,113);
    Pelicula film5 = Pelicula("Movie","The Princess Diaries","Comedy","N/A",0005,2,2001,115);
    Pelicula film6 = Pelicula("Movie","The Intern","Comedy","Teen Choice Award-Mejor Comedia-",0006,4,2015,95);
    Pelicula film7 = Pelicula("Movie","Gravity","Science-fiction","N/A",0056,1,2013,90);
    Pelicula film8 = Pelicula("Movie","I Am Mother","Science-fiction","N/A",0043,1,2015,113);
    Pelicula film9 = Pelicula("Movie","Corpse Bride","Animation","N/A",0042,5,2005,78);
    Pelicula film10 = Pelicula("Movie","The Little Prince","Animation","N/A",0023,3,2015,110);
    Pelicula film11 = Pelicula("Movie","Venom","Action","N/A",0123,5,2015,110);
    Pelicula film12 = Pelicula("Movie","1922","Thriller","N/A",0322,1,2017,102);
    Pelicula film13 = Pelicula("Movie","The Notebook (Diario de una Pasión)","Romantic","Best Movie",1356,5,2004,123);
    Pelicula film14 = Pelicula("Movie","Flipped","Romantic","N/A",1894,5,2004,170);
    Pelicula film15 = Pelicula("Movie","You Get Me","Thriller","N/A",1263,3,2017,89);
    Pelicula film16 = Pelicula("Movie","Me Before You","Romantic","N/A",1123,4,2016,110);
    Pelicula film17 = Pelicula("Movie","Diana: In her Own Words","Documental","N/A",3673,5,2017,113);
    Pelicula film18 = Pelicula("Movie","The Accountant of Auschwitz","Documental","N/A",3582,3,2018,78);
    
    
    /* Vector que almacena peliculas */
    peliculas = {film1,film2,film3,film4,film5,film6,film7,film8,film9,film10,
        film11,film12,film13,film14,film15,film16,film17,film18};
    
    /* Series disponibles */
    
    Serie serie1 = Serie("Series","Dark","Science-fiction","Secrets",1,1,13,1789,2,2020,51);
    Serie serie2 = Serie("Series","Dark","Science-fiction","The Survivors",2,3,13,1903,4,2020,59);
    Serie serie3 = Serie("Series","Dark","Science-fiction","The Origin",4,3,13,1673,5,2020,64);
    Serie serie4 = Serie("Series","Adventure Time","Cartoon","Finn & Jake",1,5,40,1453,3,2014,21);
    Serie serie5 = Serie("Series","Elite","Drama","Bienvenido",1,1,30,1432,3,2018,55);
    Serie serie6 = Serie("Series","Elite","Drama","20 horas desaparecido",1,2,30,1632,5,2018,51);
    Serie serie7 = Serie("Series","Elite","Drama","Carla",1,3,30,1232,5,2018,48);
    Serie serie8 = Serie("Series","Money Heist","Crime","Episodio 1",1,1,20,1634,2,2020,47);
    Serie serie9 = Serie("Series","Money Heist","Crime","Episodio 2",2,1,20,1903,4,2020,41);
    Serie serie10 = Serie("Series","Money Heist","Crime","Episodio 2",2,1,20,1913,4,2020,41);
    Serie serie11 = Serie("N Series","Unbelievable","Drama","Episodio 1",1,1,14,1956,5,2019,58);
    Serie serie12 = Serie("N Series","Unbelievable","Drama","Episodio 2",2,1,14,1956,5,2019,58);
    
    /* Vectpr que almacena series */
    series = {serie1,serie2,serie3,serie4,serie5,serie6,serie7,serie8,serie9,serie10,serie11,serie12};


}

int Biblioteca::contrastString(string c1, string c2) {
    transform(c1.begin(), c1.end(), c1.begin(), ::tolower);
    transform(c2.begin(), c2.end(), c2.begin(), ::tolower);
    if(c1.compare(c2) == 0)
        return 1;
    return 0;
}

void Biblioteca::mostrarDatos() {
    cout << "=== MOVIES / FILMS ===\n" << endl;
    for (int i = 0; i < peliculas.size(); i++){
        peliculas[i].mostrarDatos();
    }
    cout << "=== SERIES ===\n" << endl;
    for (int i = 0; i < series.size(); i++){
        series[i].mostrarDatos();
    }
}
void Biblioteca::mostrarPeliculas() {
    cout << "=== MOVIES / FILMS ===\n" << endl;
    for (int i = 0; i < peliculas.size(); i++){
        peliculas[i].mostrarDatos();
    }
}
void Biblioteca::mostrarSeries() {
    cout << "=== SERIES ===\n" << endl;
    for (int i = 0; i < series.size(); i++){
        series[i].mostrarDatos();
    }
}
void Biblioteca::buscarGenero(string genero) {
    cout << "The movies and series with the genre " << "'" << genero << "'" << " are shown here:\n" << endl;
    for (int i = 0; i < peliculas.size(); i++){
        if (contrastString(genero, peliculas[i].getGenero()) == 1){
            peliculas[i].mostrarDatos();
        }
    }
    for (int i = 0; i < series.size(); i++) {
        if (contrastString(genero, series[i].getGenero()) == 1){
            series[i].mostrarDatos();
        }
    }
}
void Biblioteca::buscarCalificacion(int cali){
    int i;
    cout << "The movies and series with a score equal to " << cali << " are shown here: \n" << endl;
    for (i = 0; i < peliculas.size(); i++){
        if (peliculas[i].getCalificacion() == cali){ // >=
            peliculas[i].mostrarDatos();
        }
    }
    for (i = 0; i < series.size(); i++){
        if (series[i].getCalificacion() == cali){ // >=
            series[i].mostrarDatos();
        }
    }
}
void Biblioteca::buscarSerieCalificacion(int cali){
    cout << "\nSeries with a score equal to " << cali << " are shown here:\n" << endl;
    for (int i = 0; i < series.size(); i++){
        if (series[i].getCalificacion() == cali){
            series[i].mostrarDatos();
        }
    }
}
void Biblioteca::buscarPeliculaCalificacion(int cali){
    cout << "\nFilms with a score equal to " << cali << " are shown here:\n" << endl;
    for (int i = 0; i < peliculas.size(); i++){
        if (peliculas[i].getCalificacion() == cali){
            peliculas[i].mostrarDatos();
        }
    }
}
bool Biblioteca::disponible(string titulo) {
    bool exist = false;
    for (int i = 0; i < peliculas.size(); i++){
        if (contrastString(titulo, peliculas[i].getNombre()) == 1){
            exist = true;
        }
    }
    for (int i = 0; i < series.size(); i++){
        if (contrastString(titulo, series[i].getNombre()) == 1){
            exist = true;
        }
    }
    return exist;
}
bool Biblioteca::disponibleGenero(string genero){
    int i;
    generos = {"Comedy","Action","Romantic","Science-fiction",
        "Cartoon","Thriller","Animation","Drama","Crime","Documental"};
    bool disponible = false;
    for (i = 0; i < generos.size();i++){
        if (contrastString(genero,generos[i]) == 1){
            disponible = true; }
    }
    return disponible;
    
}
void Biblioteca::calificar(string titulo, int value){
    bool calificado = false;
    int i = 0;
    while (!calificado && i < peliculas.size()){
        if (contrastString(titulo, peliculas[i].getNombre()) == 1){
            peliculas[i].calificaVideo(value);
            cout << "The new score for this item is: \n" << endl;
            peliculas[i].mostrarDatos();
            calificado = true;
        }
        i++;
    }
    i = 0;
    while (!calificado && i < series.size()){
        if (contrastString(titulo, series[i].getNombre()) == 1){
            series[i].calificaVideo(value);
            cout << "\nThe new score for this item is: \n" << endl;
            series[i].mostrarDatos();
            calificado = true;
        }
        i++;
    }
}

//METODOS PARA EL CASE 3

bool Biblioteca::disponibleNombre(string nombre){
    int i;
    s = {"Dark","Adventure Time","Elite","Money Heist","Unbelievable"};
    bool disponible = false;
    for (i = 0; i < s.size(); i++){
        if (contrastString(nombre,s[i]) == 1){
            disponible = true;
            
        }
    }
    return disponible;
    
}

void Biblioteca::buscarSerieNombre(string nameSeries){
    cout << "The episodes from the " << nameSeries << "series are shown here: " << endl;
    
    for (int i = 0; i < series.size(); i++){
        if (contrastString(nameSeries, series[i].getNombre()) == 1){
            series[i].mostrarDatos();
        }
    }
}

void Biblioteca::buscarEpisodioNombreCalificacion(int calif, string nombreSerie) {
    
    cout << "The episodes of the series " << nombreSerie << ",with a score equal to " << calif << "are shown here:" << endl;
    
    for (int i = 0; i < series.size(); i++) {
        if (series[i].getCalificacion() == calif && series[i].getNombre() == nombreSerie ){
            series[i].mostrarDatos();
        }
    }
}
