// Interfaz de la clase Podcast.
// Relación: un Podcast ES UNA Pista (herencia).

#ifndef PODCAST_H
#define PODCAST_H

#include <string>

#include "Pista.h"

class Podcast : public Pista {
private:
    std::string anfitrion;
    int numEpisodio;

public:
    Podcast(const std::string& titulo, int min, int seg,
            const std::string& anfitrion, int numEpisodio);

    std::string getAnfitrion() const;
    int getNumEpisodio() const;

    void mostrar() const;
};
// TODO 3.2: declara la clase Podcast derivada de Pista con herencia pública.
//   Atributos privados: anfitrion, numeroEpisodio.
//   Constructor, accedentes const y  void mostrar() const;
//   siguiendo el mismo patrón que Cancion.
//
// Pregunta: ¿qué código te ahorraste gracias a la herencia?

#endif
