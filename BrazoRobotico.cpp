#include "BrazoRobotico.h"
#include <iostream>

// Constructor
BrazoRobotico::BrazoRobotico(double _x, double _y, double _z, bool _sujetandoObjeto)
    : x(_x), y(_y), z(_z), sujetandoObjeto(_sujetandoObjeto) {}

// Métodos consultores
double BrazoRobotico::getX() const { return x; }
double BrazoRobotico::getY() const { return y; }
double BrazoRobotico::getZ() const { return z; }
bool BrazoRobotico::estaSujetandoObjeto() const { return sujetandoObjeto; }

// Método para coger un objeto
void BrazoRobotico::coger() {
    if (!sujetandoObjeto) {
        sujetandoObjeto = true;
        std::cout << "El brazo robotico ha cogido un objeto." << std::endl;
    } else {
        std::cout << "El brazo robotico ya está sujetando un objeto." << std::endl;
    }
}

// Método para soltar un objeto
void BrazoRobotico::soltar() {
    if (sujetandoObjeto) {
        sujetandoObjeto = false;
        std::cout << "El brazo robotico ha soltado el objeto." << std::endl;
    } else {
        std::cout << "El brazo robotico no está sujetando un objeto." << std::endl;
    }
}

// Método para mover el brazo a una nueva posición en el espacio 3D
void BrazoRobotico::mover(double newX, double newY, double newZ) {
    x = newX;
    y = newY;
    z = newZ;
    std::cout << "El brazo robotico se ha movido a (" << x << ", " << y << ", " << z << ")." << std::endl;
}
