//  Naomi Estefanía Nieto Vega A01706095
//  main.cpp
//  ProyectoIntegrador
//  Verano Junio - Julio 2020

#include <iostream>
#include "Biblioteca.h"
#include "Video.h"
#include "Pelicula.h"
#include "Serie.h"
#include "Episodio.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Biblioteca videos;
    string genre;
    string serie;
    string title;
    int score;
    int value;
    int option = 0;

    
    cout << "Hi!! Welcome to our online streaming service♡ \n" << endl;
    cout << "We hope you enjoy our content!!" << endl;
    cout << endl;
    
    while (option != 6) {
        
        cout << "=== Below are some options that you can choose:===" << endl;
        cout << endl;
        cout << "1. Cargar archivos de datos" << endl;
        cout << "2. Mostrar los videos en general con una cierta calificación o de un cierto género" << endl;
        cout << "3. Mostrar los episodios de una determinada serie con una calificación determinada" << endl;
        cout << "4. Mostrar las películas con cierta calificación" << endl;
        cout << "5. Calificar un video" << endl;
        cout << "\t 5.1 Pedir título a calificar" << endl;
        cout << "\t 5.2 Pedir valor otorgado" << endl;
        cout << "6. Exit / Salir" << endl;
        cout << "======" << endl;
        cout << endl;
        
        cout << "Please choose an option from 1 to 6" << endl;
        cout << "Enter the option (1-6): " << endl;
        cin >> option;
        
        switch (option) {
                
            case 1: /* Cargar archivos de datos */
                
                cout << "\n Loading files..." << endl;
                videos = Biblioteca();
                cout << "\n Files uploaded succesfully!!" << endl;
                break;
                
            case 2: /* Mostrar los videos en general con una cierta calificación o de un cierto género */
                
                char opc;
                
                cout << "a. Mostrar videos en general con cierta calificación" << endl;
                cout << "b. Mostrar videos en general con cierto género" << endl;
                cin >> opc;
                
                while (opc != 'a' && opc != 'b') {
                    cout << "Invalid option. Please type 'a' or 'b'" << endl;
                    cin >> opc;
                }
                
                if (opc == 'a') {
                    
                    cout << "\nWhat rating would you like to search? (1-5)" << endl;
                    cin >> score;
                    while (score < 1 || score > 5){
                        cout << "Value out of range. Please enter a entire number from 1 to 5" << endl;
                        cin >> score;
                    }
                    if (score >= 1 && score <= 5)
                        videos.buscarCalificacion(score);
                }
                
                else if (opc == 'b') {
                    cout << "\nWhat genre would you like to search?" << endl;
                    cout << " === Available genres: === " << endl;
                    cout << "- Comedy" << endl;
                    cout << "- Action" << endl;
                    cout << "- Romantic" << endl;
                    cout << "- Science-fiction" << endl;
                    cout << "- Cartoon" << endl;
                    cout << "- Thriller" << endl;
                    cout << "- Animation" << endl;
                    cout << "- Drama" << endl;
                    cout << "- Crime" << endl;
                    cout << "- Documental" << endl;
                    cout << endl;
                    
                    cout << "\nType the genre you want to search: " << endl;
                    cin >> genre;
                    
                    while (videos.disponibleGenero(genre) == false) { //inicio while 4.1
                        cout << "That genre does not exists." << endl;
                        cout << "Please enter a new genre again " << endl;
                        cout << endl;
                        cout << " === Available genres: === " << endl;
                        cout << "- Comedy" << endl;
                        cout << "- Action" << endl;
                        cout << "- Romantic" << endl;
                        cout << "- Science-fiction" << endl;
                        cout << "- Cartoon" << endl;
                        cout << "- Thriller" << endl;
                        cout << "- Animation" << endl;
                        cout << "- Drama" << endl;
                        cout << "- Crime" << endl;
                        cout << "- Documental" << endl;
                        cout << endl;
                        
                        cout << "\n Genre: " << endl;
                        cin >> genre;
                    }
                    
                    if (videos.disponibleGenero(genre) == true) { //inicio if 4.2
                        videos.buscarGenero(genre);
                    }
                } //fin elseif
                    
                break;
                
            case 3: /* Mostrar los episodios de una determinada serie con una calificación determinada */
                
                cout << "\n What series would you search?" << endl;
                cout << "=== Available series: ===" << endl;
                cout << "- Dark" << endl;
                cout << "- Adventure Time" << endl;
                cout << "- Elite" << endl;
                cout << "- Money Heist" << endl;
                cout << "- Unbelievable" << endl;
                
                cout << "\nType the serie you would like to search: " << endl;
                cin >> serie;
                
                while (videos.disponibleNombre(serie) == false) { //inicio while 4.1
                    cout << "That serie does not exists in our database." << endl;
                    cout << "Please enter a new serie again" << endl;
                    cout << endl;
        
                    cout << "=== Available series: ===" << endl;
                    cout << "- Dark" << endl;
                    cout << "- Adventure Time" << endl;
                    cout << "- Elite" << endl;
                    cout << "- Money Heist" << endl;
                    cout << "- Unbelievable" << endl;
                    
                    cout << "\nSerie: " << endl;
                    cin >> serie;
                }
                
                if (videos.disponibleNombre(serie) == true) { //inicio if 4.2
                    videos.buscarSerieNombre(serie);
                }
                
                cout << "\nWhat rating would you like to search? (1-5)" << endl;
                cin >> score;
                
                while (score < 1 || score > 5) {
                    cout << "Value out of range. Please enter a entire number from 1 to 5" << endl;
                    cin >> score;
                }
                
                if (score >= 1 && score <= 5) {
                    videos.buscarEpisodioNombreCalificacion(score, serie);
                }
                break;
                
            case 4: /* Mostrar pelicula con cierta calificacion */
                
                int score;
                
                cout << "\nWhat rating would you like to search? (1-5)" << endl;
                cin >> score;
                while (score < 1 || score > 5){  //while4.1
                    cout << "Value out of range. Please enter a entire number from 1 to 5" << endl;
                    cin >> score;
                }//while 4.1
                
                if (score >= 1 && score <= 5){  //if4.1
                    videos.buscarPeliculaCalificacion(score);
                }//if4.1
                
                
                break;
                
            case 5: /* Calificar un video */
                
                cout << "\nWhich title would you like to rate?" << endl;
                cin >> title;
                getline(cin, title);
                
                while (videos.disponible(title) == false) {
                    cout << "Oops. That title is not available in our database"<< endl;
                    cout << "Please enter a new one" << endl;
                    getline(cin,title);
                }
                
                if (videos.disponible(title) == true) {
                    cout << "\nType the score you want to give to " << title << ": (1-5)" << endl;
                    cin >> value;
                    while (value < 1 || value > 5){
                        cout << "Value out of range. Please enter a entire number from 1 to 5" << endl;
                        cin >> value;
                    }
                    if (value >= 1 && value <= 5){
                        videos.calificar(title, value);
                    }
                }
                break;
                
            case 6: /* Salir */
                
                cout << "\nThanks for using our service." << endl;
                cout << "We hope you enjoyed our content" << endl;
                cout << endl;
                cout << "See you soon!!!" << endl;
                
                break;
                
            default: /* Opcion no valida */
                
                if (option != 6){
                    cout << "\nInvalid option. Please enter a valid option (1-6)"<< endl;
                }
                break;
                
        } /* End of Switch statement */
        
    }/* End of loop while */
    
    return 0;
    
}; /* End main */
