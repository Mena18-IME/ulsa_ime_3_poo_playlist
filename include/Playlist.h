// Interfaz de la clase Playlist.
// Relación: una Playlist USA canciones y podcasts que ya existen (agregación).

#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <string>
#include <vector>

#include "Cancion.h"
#include "Duracion.h"
#include "Podcast.h"

class Playlist {
private:
    std::string nombre;
    // Agregación: Guarda punteros a objetos que existen externamente
    std::vector<Cancion*> canciones;
    std::vector<Podcast*> podcasts;

public:
    Playlist(const std::string& nombre);

    std::string getNombre() const;

    bool agregarCancion(Cancion* cancion);
    bool agregarPodcast(Podcast* podcast);

    int cantidadPistas() const;
    Duracion duracionTotal() const;
    void mostrar() const;
};
// TODO 4.1: declara la clase Playlist.
//   Atributos privados:
//     std::string nombre;
//     std::vector<Cancion*> canciones;
//     std::vector<Podcast*> podcasts;
//   Constructor: recibe el nombre.
//
// TODO 4.2: declara  bool agregarCancion(Cancion* cancion);
// TODO 4.3: declara  bool agregarPodcast(Podcast* podcast);
// TODO 4.4: declara  int cantidadPistas() const;
// TODO 4.5: declara  Duracion duracionTotal() const;
// TODO 4.6: declara  void mostrar() const;
//
// Pregunta: la Playlist no tiene destructor que haga delete de las pistas.
// ¿Por qué eso es lo correcto en una agregación?

#endif
