#include <iostream>
#include "Enemigos.h"
#include "EnemigoFinal.h"


using namespace std;

void peleaEnemigo(Enemigo& jugador, Enemigo& enemigo) {
	int opcion;
	int probabilidad;
	cout << "Un " << enemigo.getNombre() << " Salvaje\n\n";
	cout << "\n\n";
	jugador.printStatsPresentacion();
	enemigo.printStatsPresentacion();
	while (jugador.getHp() > 0 && enemigo.getHp() > 0) {
		// Turno del jugador
		cout << "Escoge tu ataque\n";
		cout << "[1] Hechizo Luminoso\n";
		cout << "[2] Singularidad Brillante\n";
		cout << "[3] Chispa Sr Mornoy\n";
		cin >> opcion;
		switch (opcion) {
		case 1:
			enemigo.setHp(enemigo.getHp() - jugador.getDanyo());
			break;
		case 2:
			probabilidad = rand() % 3;
			if (probabilidad < 2) {

				enemigo.setHp(enemigo.getHp() - jugador.getDanyo() * 2);
			}
			else {
				cout << "El ataque a fallado\n";
			}
			break;
		case 3:
			probabilidad = rand() % 10;
			if (probabilidad == 0) {
				enemigo.setHp(enemigo.getHp() - jugador.getDanyo() * 20);

			}
			else {
				cout << "El ataque a fallado\n";
			}
			break;
		default:
			break;
		}

		if (enemigo.getHp() <= 0) {
			cout << jugador.getNombre() << " Has derrotado a " << enemigo.getNombre() << "!\n";
			cout << "Puedes continuar\n";
			
		}
		else {
			enemigo.printStatsEresAtacado();
			// Turno del enemigo
			jugador.setHp(jugador.getHp() - enemigo.getDanyo());
			enemigo.printStatsPresentacion();
			if (jugador.getHp() < 0) {
				jugador.setHp(0);
			}
			jugador.printStatsEresAtacado();

		}
		
		
	}
}
void peleaBoss(Enemigo& jugador, EnemigoFinal& boss) {
	cout << " Jefe final, " << boss.getNombre() << "!\n\n";
	cout << "\n\n";
	int opcion;
	int probabilidad;
	jugador.printStatsPresentacion();
	boss.printStatsPresentacion();
	while (jugador.getHp() > 0 && boss.getHp() > 0) {
		// Turno del jugador
		cout << "Escoge tu ataque\n";
		cout << "[1] Hechizo Luminoso\n";
		cout << "[2] Singularidad Brillante\n";
		cout << "[3] Chispa Sr Mornoy\n";
		cin >> opcion;
		switch (opcion) {
		case 1:
			boss.setHp(boss.getHp() - jugador.getDanyo());
			break;
		case 2:
			probabilidad = rand() % 3;
			if (probabilidad < 2) {

				boss.setHp(boss.getHp() - jugador.getDanyo() * 2);
			}
			else {
				cout << "El ataque a fallado\n";
			}
			break;
		case 3:
			probabilidad = rand() % 2;
			if (probabilidad == 0) {
				boss.setHp(boss.getHp() - jugador.getDanyo() * 3);

			}
			else {
				cout << "El ataque a fallado\n";
			}
			break;
		default:
			break;
		}

		if (boss.getHp() <= 0) {
			cout << jugador.getNombre() << " Has derrotado a " << boss.getNombre() << "!\n";
		}
		else {
			boss.printStatsEresAtacado();
			// Turno del enemigo
			probabilidad = rand() % 3;
			if (probabilidad == 0) {
				jugador.setHp(jugador.getHp() - boss.getDanyo());
				boss.printStatsPresentacion();
			}
			else if (probabilidad == 1) {
				jugador.setHp(jugador.getHp() - boss.getFrozenAttack());
				cout << "Te ha atacado \n";
				cout << boss.getNombre() << " tiene " << boss.getHp() << " de vida y hace " << boss.getFrozenAttack() << " de daño\n";
			}
			else if (probabilidad == 2) {
				jugador.setHp(jugador.getHp() - boss.getFireAttack());
				cout << "Te ha atacado \n";
				cout << boss.getNombre() << " tiene " << boss.getHp() << " de vida y hace " << boss.getFireAttack() << " de daño\n";
			}

			if (jugador.getHp() < 0) {
				jugador.setHp(0);
			}
			jugador.printStatsEresAtacado();
		}
		
	}
}
void localizacionPersonajes(Enemigo& jugador, Enemigo& malo1, Enemigo& malo2, Enemigo& malo3, Enemigo& malo4, EnemigoFinal& maloFinal) {

	if (jugador.getPosicionX() == malo1.getPosicionX() && jugador.getPosicionY() == malo1.getPosicionY()) {
		peleaEnemigo(jugador, malo1);
	}
	else if (jugador.getPosicionX() == malo2.getPosicionX() && jugador.getPosicionY() == malo2.getPosicionY()) {
		peleaEnemigo(jugador, malo2);
	}
	else if (jugador.getPosicionX() == malo3.getPosicionX() && jugador.getPosicionY() == malo3.getPosicionY()) {
		peleaEnemigo(jugador, malo3);
	}
	else if (jugador.getPosicionX() == malo4.getPosicionX() && jugador.getPosicionY() == malo4.getPosicionY()) {
		peleaEnemigo(jugador, malo4);

	}
	else if (jugador.getPosicionX() == maloFinal.getPosicionX() && jugador.getPosicionY() == maloFinal.getPosicionY()) {
		peleaBoss(jugador, maloFinal);
	}

}



void movimiento(Enemigo& jugador, string arrayTablerito[16][8]) {
	char moving;

	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	int PosXAnterior = jugador.getPosicionX();
	int PosYAnterior = jugador.getPosicionY();
	cin >> moving;
	switch (moving) {
	case 'a':
	
			jugador.setPosicionX(jugador.getPosicionX() - 1);
		
		break;
	case 'd':
	
			jugador.setPosicionX(jugador.getPosicionX() + 1);
		
		break;
	case 'w':
	
			jugador.setPosicionY(jugador.getPosicionY() - 1);
		
		break;
	case 's':
	
			jugador.setPosicionY(jugador.getPosicionY() + 1);

		break;
	default:
		break;
	}

	arrayTablerito[jugador.getPosicionY()][jugador.getPosicionX()] = " J ";
}
void principio(Enemigo& jugador) {
	string nombre;
	cout << "Bienvenido a Kingdom of Monlau\n";
	cout << "\n";
	cout << "Tu nombre?\n";
	cout << "\n";
	cin >> nombre;
	jugador.setNombre(nombre);



}
void imprimirTablero(string arrayTablerito[16][8]) {

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 8; j++) {
			cout << arrayTablerito[i][j];
		}
		cout << "\n";
	}
	cout << "\n";
}
void finalJuego(Enemigo Jugador, EnemigoFinal FinalBoss) {

	if (Jugador.getHp() <= 0) {
		
		cout << "Has muerto\n";
		
	}
	else if (FinalBoss.getHp() <= 0) {
		cout << "Has conseguido sobrevivir\n";
		
		
	}

}
int main() {
	srand(time(NULL));
	Enemigo Heroe("Lux", 35, 1000, rand() % 8, 0);
	Enemigo Enemigo1("Zilean", 40, 100, rand() % 8, 1 + rand() % 13);
	Enemigo Enemigo2("Lee sin", 30, 200, rand() % 8, 1 + rand() % 13);
	Enemigo Enemigo3("Catalejo", 25, 250, rand() % 8, 1 + rand() % 13);
	Enemigo Enemigo4("Ivan", 15, 300, rand() % 8, 1 + rand() % 13);
	EnemigoFinal Boss(500, "Hernan", 30, 100, 150, rand() % 8, 15);
	string arrayTablero[16][8];
	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 8; j++) {
			if (Heroe.getPosicionY() == i && Heroe.getPosicionX() == j) {
				arrayTablero[i][j] = " J ";
			}
			else if (Boss.getPosicionY() == i && Boss.getPosicionX() == j || Enemigo1.getPosicionY() == i && Enemigo1.getPosicionX() == j || Enemigo2.getPosicionY() == i && Enemigo2.getPosicionX() == j || Enemigo3.getPosicionY() == i && Enemigo3.getPosicionX() == j || Enemigo4.getPosicionY() == i && Enemigo4.getPosicionX() == j) {
				arrayTablero[i][j] = " 8 ";
			}

			else {
				arrayTablero[i][j] = " _ ";
			}

		}
	}

	principio(Heroe);

	while (Heroe.getHp() > 0 && Boss.getHp() > 0) {
		imprimirTablero(arrayTablero);
		movimiento(Heroe, arrayTablero);

		localizacionPersonajes(Heroe, Enemigo1, Enemigo2, Enemigo3, Enemigo4, Boss);
	}

	finalJuego(Heroe, Boss);
}