#include <iostream>
#include "Enemigos.h"
using namespace std;
//constructores

Enemigo::Enemigo() {
    danyo = 0;
    hp = 0;
    posicionX = 0;
    posicionY = 0;
    nombre = "Jugador";
}

Enemigo::Enemigo(string pNombre, int pDanyo, int pHp, int pPosicionX, int pPosicionY) {
    danyo = pDanyo;
    hp = pHp;
    nombre = pNombre;
    posicionY = pPosicionY;
    posicionX = pPosicionX;

}

//getters

int Enemigo::getDanyo() {
    return danyo;
}

string Enemigo::getNombre() {
    return nombre;
}

int Enemigo::getHp() {
    return hp;
}

int Enemigo::getPosicionX() {
    return posicionX;
}

int Enemigo::getPosicionY() {
    return posicionY;
}



//setters

void Enemigo::setDanyo(int pDanyo) {
    danyo = pDanyo;
}

void Enemigo::setNombre(string pNombre) {
    nombre = pNombre;
}

void Enemigo::setHp(int pHp) {
    hp = pHp;
}

void Enemigo::setPosicionX(int pPosicionX) {
    posicionX = pPosicionX;
}

void Enemigo::setPosicionY(int pPosicionY) {
    posicionY = pPosicionY;
}


//metodosPropios



void Enemigo::printStatsPresentacion() {
    cout << getNombre() << " tiene " << getHp()  ;
}

void Enemigo::printStatsEresAtacado() {
    cout << getNombre() << " ha sido atacado y le quedan " << getHp() << " puntos de vida\n";
}



