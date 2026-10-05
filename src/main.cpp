// Práctica 1: Playlist de música
// Programación Orientada a Objetos - Ingeniería Mecatrónica, 3er semestre
//
// Compilar (desde la raíz del repositorio):
//   g++ -Wall -Wextra -std=c++17 -Iinclude src/*.cpp -o playlist
// Ejecutar:
//   ./playlist
//
// Completa los TODO en el orden que indica la Fase 3 de PRACTICA.md.
// Compila después de terminar cada clase, no hasta el final.

#include <iostream>
#include "Cancion.h"
#include "Podcast.h"
#include "Playlist.h"

int main() {
    std::cout << "Practica 1: Playlist de musica" << std::endl;
    std::cout << "Plantilla lista. Completa los TODO de include/ y src/." << std::endl;

    // TODO 5.1: crea la biblioteca: al menos tres canciones y un podcast.
    
    Cancion c1("Bohemian Rhapsody", 5, 55, "Queen", "Rock");
    Cancion c2("Hotel California", 6, 30, "Eagles", "Rock");
    Cancion c3("", 3, 75, "Artista Desconocido", "Pop"); // Prueba con título vacío y segundos > 59
    Podcast p1("Tech Talk #42", 25, 10, "John Doe", 42);

    // TODO 5.2: crea dos playlists y agrega pistas a cada una.
    //   Al menos una canción debe estar en las dos playlists.
    
    Playlist pl1("Favoritas del Auto");
    Playlist pl2("Para Estudiar");

    pl1.agregarCancion(&c1);
    pl1.agregarCancion(&c2);
    pl1.agregarPodcast(&p1);

    pl2.agregarCancion(&c2); // c2 está en ambas playlists
    pl2.agregarCancion(&c3);

    // TODO 5.3: muestra ambas playlists.

    std::cout << "\n=== MOSTRANDO PLAYLIST 1 ===" << std::endl;
    pl1.mostrar();

    std::cout << "\n=== MOSTRANDO PLAYLIST 2 ===" << std::endl;
    pl2.mostrar();

    // TODO 5.4: experimentos guiados de la Fase 3.

    std::cout << "\n--- Experimento: Modificando 'Hotel California' a 'Hotel California (Live)' ---" << std::endl;
    c2.setTitulo("Hotel California (Live)");

    std::cout << "\nRevisando título en Playlist 1:" << std::endl;
    pl1.mostrar();

    // TODO 5.5: casos de prueba de la Fase 4.

    std::cout << "\n=== PRUEBAS LÍMITE ===" << std::endl;
    std::cout << "Prueba agregar duplicado (c1 en pl1): " 
              << (pl1.agregarCancion(&c1) ? "Agregado" : "Rechazado (Correcto)") << std::endl;
    std::cout << "Prueba agregar nullptr: " 
              << (pl1.agregarCancion(nullptr) ? "Agregado" : "Rechazado (Correcto)") << std::endl;

    return 0;
}