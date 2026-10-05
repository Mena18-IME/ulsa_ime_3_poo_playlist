// Implementación de la clase Playlist.

#include "Playlist.h"

#include <iostream>

// TODO 4.1: implementa el constructor de Playlist.

Playlist::Playlist(const std::string& nombre) : nombre(nombre) {}

// TODO 4.2: implementa  bool Playlist::agregarCancion(Cancion* cancion)

bool Playlist::agregarCancion(Cancion* cancion) {
    if (cancion == nullptr) {
        return false;
    }
    for (const auto& c : canciones) {
        if (c == cancion) {
            return false;
        }
    }
    canciones.push_back(cancion);
    return true;
}

// TODO 4.3: implementa  bool Playlist::agregarPodcast(Podcast* podcast)

bool Playlist::agregarPodcast(Podcast* podcast) {
    if (podcast == nullptr) {
        return false;
    }
    for (const auto& p : podcasts) {
        if (p == podcast) {
            return false;
        }
    }
    podcasts.push_back(podcast);
    return true;
}

// TODO 4.4: implementa  int Playlist::cantidadPistas() const

int Playlist::cantidadPistas() const {
    return static_cast<int>(canciones.size() + podcasts.size());
}

// TODO 4.5: implementa  Duracion Playlist::duracionTotal() const

Duracion Playlist::duracionTotal() const {
    int totalSeg = 0;
    for (const auto& c : canciones) {
        totalSeg += c->getDuracion().totalSegundos();
    }
    for (const auto& p : podcasts) {
        totalSeg += p->getDuracion().totalSegundos();
    }
    return Duracion(0, totalSeg);
}

// TODO 4.6: implementa  void Playlist::mostrar() const

void Playlist::mostrar() const {
    std::cout << "Playlist: " << nombre << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "Canciones:" << std::endl;
    for (const auto& c : canciones) {
        std::cout << "  * ";
        c->mostrar();
    }
    std::cout << "Podcasts:" << std::endl;
    for (const auto& p : podcasts) {
        std::cout << "  * ";
        p->mostrar();
    }
    std::cout << "Cantidad de pistas: " << cantidadPistas() << std::endl;
    std::cout << "Duración total: ";
    duracionTotal().imprimir();
    std::cout << std::endl << "----------------------------------------" << std::endl;
}