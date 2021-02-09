//  Naomi Estefanía Nieto Vega A01706095
//  Biblioteca.h
//  ProyectoIntegrador
//  Verano Junio - Julio 2020

#ifndef Biblioteca_h
#define Biblioteca_h
#include <vector>
#include <iostream>
#include "Pelicula.h"
#include "Serie.h"

using namespace std;

class Biblioteca {
private:
    vector<Pelicula> peliculas;
    vector<Serie> series;
    vector<string> generos;
    vector<string> s;
    
public:
    Biblioteca();
    int contrastString(string, string);
    int contrastInteger(int, int);
    void mostrarDatos(); // muestra todos los datos S/P
    void mostrarPeliculas(); // muestra peliculas
    void mostrarSeries(); // muestra series
    void buscarGenero(string); // Busca por género
    void buscarCalificacion(int); // Busca por calificación
    void buscarSerieCalificacion(int); // busca serie por calificación
    void buscarPeliculaCalificacion(int); // busca película por calificación
    bool disponible(string); // comprueba si existe el titulo
    bool disponibleGenero(string); // comprueba si existe el genero
    void calificar(string, int); // califica videos
    bool disponibleNombre(string);
    void buscarSerieNombre(string); // busca serie por nombre
    void buscarEpisodioNombreCalificacion(int, string); 
    
};

#endif /* Biblioteca_h */
