#include "EnemigoFinal.h"

using namespace std;

//CONSTRUCTOR
//TIENE COMO PARÁMETROS DE ENTRADA LOS ATRIBUTOS PROPIOS
//Y LOS ATRIBUTOS DE LA CLASE QUE HEREDA
//LOS PARÁMETROS DE LA CLASE QUE HEREDA SE PASAN COMO PARÁMETROS DE ENTRADA
//AL CONSTRUCTOR HEREDADO
EnemigoFinal::EnemigoFinal(int pHp,
	string pNombre,
	int pDanyo,
	int pFireAttack,
	int pFrozenAttack,
	int pPosicionX,
	int pPosicionY
) : Enemigo
	(pNombre,
		pDanyo,
		pHp,
		pPosicionX,
		pPosicionY

	) {
	fireAttack = pFireAttack;
	frozenAttack = pFrozenAttack;

}

//	Enemigo(string pNombre, int pDanyo, int pHp, int pPosicionX, int pPosicionY);

//GETTERS AND SETTERS
int EnemigoFinal::getFireAttack() {
	return fireAttack;
}
int EnemigoFinal::getFrozenAttack() {
	return frozenAttack;
}


void EnemigoFinal::setFireAttack(int pFireAttack) {
	fireAttack = pFireAttack;
}
void EnemigoFinal::setFrozenAttack(int pFrozenAttack) {
	frozenAttack = pFrozenAttack;
}


//METODOS PROPIOS
void EnemigoFinal::printAllStats() {
	cout << "El nombre del enemigo final es " << getNombre() << "\n";
	cout << "La vida del enemigo final es " << getHp() << "\n";

}