#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x, y, z; // Coordenadas (x, y, z) en el espacio 3D
    bool sujetandoObjeto; // Indica si el robot está sujetando un objeto

public:
    // Constructor
    BrazoRobotico(double _x, double _y, double _z, bool _sujetandoObjeto);

    // Métodos consultores
    double getX() const;
    double getY() const;
    double getZ() const;
    bool estaSujetandoObjeto() const;

    // Método para coger un objeto
    void coger();

    // Método para soltar un objeto
    void soltar();

    // Método para mover el brazo a una nueva posición en el espacio 3D
    void mover(double newX, double newY, double newZ);
};

#endif 
