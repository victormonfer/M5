#pragma once
#include <string>
#include <iostream>

class Lancha {
private:
    int distanciaRecorrida;
    std::string nombre;
    int velocidad;
    bool nitro;

public:
    //constructor
    Lancha(int pDistanciaRecorrida, std::string pNombre,bool pNitro , int pVelocidad);
    //getters

    int getDistanciaRecorrida();

    std::string getNombre();

    int getVelocidad();


    bool getNitro();

    //setters

    void setDistanciaRecorrida(int pDistanciaRecorrida);

    void setNombre(std::string pNombre);

    void setVelocidad(int pVelocidad);

    void setNitro(bool pNitro);

  

    //metodos propios 

    

    void imprimirStatus();
    void Disctanciarecorrido();
    void Nitronova();
    void Nitrova();
};
