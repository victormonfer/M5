
#pragma once
#include <iostream>
using namespace std;
class Enemigo
{

private:

	int danyo;
	string nombre;
	int hp;
	int posicionX;
	int posicionY;


public:

	//constructor

	Enemigo();
	Enemigo(string pNombre, int pDanyo, int pHp, int pPosicionX, int pPosicionY);

	//getters

	int getDanyo();
	string getNombre();
	int getHp();
	int getPosicionX();
	int getPosicionY();


	//setters     

	void setDanyo(int pDanyo);
	void setNombre(string pNombre);
	void setHp(int pHp);
	void setPosicionX(int pPosicionX);
	void setPosicionY(int pPosicionY);


	//metodoPropio

	void printStatsPresentacion();
	void printStatsEresAtacado();

};