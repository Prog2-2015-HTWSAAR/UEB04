#include "Yahtzee.h"
using namespace std;

Yahtzee::Yahtzee()
{
	this->ersterWurf = 0;
	this->zweiterWurf = 0;
	this->dritterWurf = 0;
	this->vierterWurf = 0;
	this->fuenfterWurf = 0;
}


Yahtzee::~Yahtzee()
{
}

void Yahtzee::setWurf(int value, int wurfNummer){
	if (wurfNummer == 1){
		ersterWurf = value;
	}
	if (wurfNummer == 2){
		zweiterWurf = value;
	}
	if (wurfNummer == 3){
		dritterWurf = value;
	}
	if (wurfNummer == 4){
		vierterWurf = value;
	}
	if (wurfNummer == 5){
		fuenfterWurf = value;
	}
	cout << endl;
}

void Yahtzee::getWuerfe(){
	if (ersterWurf > 0) {
		cout << "Erster   Wurf: " << ersterWurf << endl;
	}
	if (zweiterWurf > 0) {
		cout << "Zweiter  Wurf: " << zweiterWurf << endl;
	}
	if (dritterWurf > 0) {
		cout << "Dritter  Wurf: " << dritterWurf << endl;
	}
	if (vierterWurf > 0) {
		cout << "Vierter  Wurf: " << vierterWurf << endl;
	}
	if (fuenfterWurf > 0) {
		cout << "Fuenfter Wurf: " << fuenfterWurf << endl;
	}
}
// Switch case
