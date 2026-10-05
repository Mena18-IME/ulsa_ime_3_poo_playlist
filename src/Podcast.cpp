// Implementación de la clase Podcast.

#include "Podcast.h"

#include <iostream>

// TODO 3.2: implementa el constructor, los accedentes y mostrar() de Podcast.

Podcast::Podcast(const std::string& titulo, int min, int seg,
                 const std::string& anfitrion, int numEpisodio)
    : Pista(titulo, min, seg), anfitrion(anfitrion), numEpisodio(numEpisodio) {}

std::string Podcast::getAnfitrion() const {
    return anfitrion;
}

int Podcast::getNumEpisodio() const {
    return numEpisodio;
}

void Podcast::mostrar() const {
    mostrarInfo();
    std::cout << " - Anfitrión: " << anfitrion << " (Ep. " << numEpisodio << ")" << std::endl;
}