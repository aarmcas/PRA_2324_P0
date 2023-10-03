#include <stdio.h>
#include "BrazoRobotico.h"
#include "BrazoRobotico.h"

int main(){
    // Crear un objeto de la clase BrazoRobotico
    BrazoRobotico brazo(0.0, 0.0, 0.0, false);

    // Consultar las coordenadas y el estado de sujeción
    std::cout << "Coordenadas (x, y, z): (" << brazo.getX() << ", " << brazo.getY() << ", " << brazo.getZ() << ")" << std::endl;
    std::cout << "Sujetando un objeto: " << (brazo.estaSujetandoObjeto() ? "Sí" : "No") << std::endl;

    // Mover el brazo a una nueva posición
    brazo.mover(1.0, 2.0, 3.0);

    // Coger y soltar un objeto
    brazo.coger();
    brazo.soltar();

    return 0;
}

