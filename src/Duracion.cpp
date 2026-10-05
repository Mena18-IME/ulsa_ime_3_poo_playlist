// Implementación de la clase Duracion.

#include "Duracion.h"

#include <iostream>

Duracion::Duracion(int min, int seg) : minutos(min), segundos(seg) {
    if (minutos < 0 || segundos < 0) {
        minutos = 0;
        segundos = 0;
    } else if (segundos > 59) {
        minutos += segundos / 60;
        segundos = segundos % 60;
    }

}

int Duracion::getMinutos() const { return minutos; }

int Duracion::getSegundos() const { return segundos; }

// TODO 1.2: implementa  int Duracion::totalSegundos() const
//   Devuelve la duración completa expresada en segundos.
int Duracion::totalSegundos() const {
    return (minutos * 60) + segundos;
}

// TODO 1.3: implementa  void Duracion::imprimir() const
//   Imprime con el formato m:ss (por ejemplo 3:05, no 3:5).
void Duracion::imprimir() const {
    std::cout << minutos << ":";
    if (segundos < 10) {
        std::cout << "0";
    }
    std::cout << segundos;
}
