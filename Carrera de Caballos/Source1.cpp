#include <iostream>
#include "Caballo.h"
using namespace std;

void Comienzo(Lancha& jugador1,Lancha& jugador2) {
    string Nombre1;
    string Nombre2;
    cout << "Bienevenido a la Monlau Cup!!\n";
    cout << "Como os llamais??\n";
    cin >> Nombre1;
    cin >> Nombre2;
    jugador1.setNombre(Nombre1);
    jugador2.setNombre(Nombre2);



}

void distanciaRecorrida(Lancha& jugador) {
    jugador.Disctanciarecorrido();

}


void nitro(Lancha& jugador) {
    int elegir;
    cout << jugador.getNombre() << ", quieres tirarte el nitro?\n";
    cout << "1. Si\n";
    cout << "2. No\n";
    cin >> elegir;
    if (elegir == 1) {
        int dadonitro = rand() % 2;
        
        cout << "Has usado nitro" << "\n";
        jugador.setNitro(false);
        if (dadonitro == 0) {
            jugador.Nitronova();
        }
        else {
            jugador.Nitrova();
        }

    }
    else if (elegir == 2) {
        cout << "No has querido usar el nitro" << "\n";
    }
      
}
void velocidado(Lancha&jugador){
 int dado;

 dado = 1 + rand() % 6;
 cout << "Has aumentado la velocidad en " << dado << " m/s \n";
 jugador.setVelocidad(jugador.getVelocidad() + dado);
 cout << "vas a " << jugador.getVelocidad() << " m/s\n";
 if (jugador.getNitro() == true){
    nitro(jugador);
    
 }
  }

void podio(Lancha jugador1,Lancha jugador2) {
    if (jugador1.getDistanciaRecorrida() > jugador2.getDistanciaRecorrida()) {
        cout << "Ha ganado el jugador " << jugador1.getNombre() << "\n";

    }
    else if (jugador1.getDistanciaRecorrida() < jugador2.getDistanciaRecorrida()) {
        cout << "Ha ganado el jugador " << jugador2.getNombre()<< "\n";
    }

    else if (jugador1.getDistanciaRecorrida() == jugador2.getDistanciaRecorrida()) {
        cout << "Habeis empatado, buen trabajo\n";
    }

}



int main() {
    srand(time(NULL));

    Lancha lancha1(0, "",true ,0);
    Lancha lancha2(0, "",true ,0);
    Comienzo(lancha1, lancha2);
    
    for (int i = 0; i < 5; i = i + 1) {
        velocidado(lancha1);
        velocidado(lancha2);
        distanciaRecorrida(lancha1);
        distanciaRecorrida(lancha2);
    }
    //lancha1.imprimirStatus();
    podio(lancha1, lancha2);



    

}
