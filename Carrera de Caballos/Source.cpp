#pragma once
#include <iostream>
#include "Caballo.h"
using namespace std;

    

    Lancha::Lancha(int pDistanciaRecorrida, std::string pNombre, bool pNitro, int pVelocidad) {
        nombre = pNombre;
        velocidad = pVelocidad;
        nitro = pNitro;
        distanciaRecorrida = pDistanciaRecorrida;
    }
    
    
    int Lancha::getDistanciaRecorrida()
    {
        return distanciaRecorrida;
    }
    std::string Lancha::getNombre() {
        return nombre;
    }
    int Lancha::getVelocidad() {
        return velocidad;
    }
    bool Lancha::getNitro() {
        return nitro;
    }


    void Lancha::setNombre(std::string pNombre) {
        nombre = pNombre;
    }
    void Lancha::setDistanciaRecorrida(int pDistanciaRecorrida)
    {
        distanciaRecorrida = pDistanciaRecorrida;
    }
    void Lancha::setVelocidad(int pVelocidad) {
        velocidad = pVelocidad;
    }
    void Lancha::setNitro(bool pNitro) {
        nitro = pNitro;
    }
    void Lancha::Disctanciarecorrido()
    {
        setDistanciaRecorrida(getDistanciaRecorrida() + (getVelocidad() * 100));
        cout << "LLevas " << getDistanciaRecorrida() << "\n";
    }
    
    void Lancha::Nitronova()
    {
        setVelocidad(getVelocidad() / 2);
        cout << "No te ha ido el nitro " << getNombre() << ", vas ha " << getVelocidad() << "\n";
    }
    void Lancha::Nitrova()
    {
        setVelocidad(getVelocidad() * 2);
        cout << "Has utilizado el nitro," << getNombre() << ", vas ha " << getVelocidad() << "\n";
    }
    
    


