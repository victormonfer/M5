#include <iostream>
#include "Enemigos.h"
using namespace std;

class EnemigoFinal : public Enemigo
{
private:
	int fireAttack;
	int frozenAttack;

public:
	//CONSTRUCTOR CON ELEMENTOS DE LA CLASE PADRE Y PROPIA
	EnemigoFinal(int pHp,
		string pNombre,
		int pDanyo,
		int pFireAttack,
		int pFrozenAttack,
		int pPosicionX,
		int pPosicionY
);
	//GETTERS AND SETTERS
	int getFireAttack();
	int getFrozenAttack();


	void setFireAttack(int pFireAttack);
	void setFrozenAttack(int pFrozenAttack);

	//METODOS PROPIOS
	void printAllStats();
};

