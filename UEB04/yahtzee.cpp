#include "Yahtzee.h"
using namespace std;

Yahtzee::Yahtzee()
{
	this->wuerfeArray[0] = 0;
	this->wuerfeArray[1] = 0;
	this->wuerfeArray[2] = 0;
	this->wuerfeArray[3] = 0;
	this->wuerfeArray[4] = 0;
}


Yahtzee::~Yahtzee()
{
}

void Yahtzee::setWurf(int value, int wurfNummer){
	if (wurfNummer == 1){
		wuerfeArray[0] = value;
	}
	if (wurfNummer == 2){
		wuerfeArray[1] = value;
	}
	if (wurfNummer == 3){
		wuerfeArray[2] = value;
	}
	if (wurfNummer == 4){
		wuerfeArray[3] = value;
	}
	if (wurfNummer == 5){
		wuerfeArray[4] = value;
	}
}

void Yahtzee::getWuerfe(){
	if (wuerfeArray[0] > 0) {
		cout << "Erster   Wurf: " << wuerfeArray[0] << endl;
	}
	if (wuerfeArray[1] > 0) {
		cout << "Zweiter  Wurf: " << wuerfeArray[1] << endl;
	}
	if (wuerfeArray[2] > 0) {
		cout << "Dritter  Wurf: " << wuerfeArray[2] << endl;
	}
	if (wuerfeArray[3] > 0) {
		cout << "Vierter  Wurf: " << wuerfeArray[3] << endl;
	}
	if (wuerfeArray[4] > 0) {
		cout << "Fuenfter Wurf: " << wuerfeArray[4] << endl;
	}
}
void Yahtzee::checkDice(){
	int score = 0;
	//int paar = 0;
	int number1 = checkNumber(1);
	int number2 = checkNumber(2);
	int number3 = checkNumber(3);
	int number4 = checkNumber(4);
	int number5 = checkNumber(5);
	int number6 = checkNumber(6);

	if (number1 == 5 || number2 == 5 || number3 == 5 || number4 == 5 || number5 == 5 || number6 == 5){
		cout << "Yahtzee 50 Punkte" << endl;
	}
	else if (number1 == 1 && number2 == 1 && number3 == 1 && number4 == 1 && number5 == 1 && number6 == 0){
		cout << "Kleine Strasse 15 Punkte" << endl;
	}
	else if (number1 == 0 && number2 == 1 && number3 == 1 && number4 == 1 && number5 == 1 && number6 == 1){
		cout << "Große Strasse 20 Punkte" << endl;
	} 
	else {
		score += calcScore(1, number1);
		score += calcScore(2, number2);
		score += calcScore(3, number3);
		score += calcScore(4, number4);
		score += calcScore(5, number5);
		score += calcScore(6, number6);
		cout << score << " Punkte" << endl;
	}
	
	//cout << "n1 " << number1 << "n2 " << number2 << "n3 " << number3 << "n4 " << number4 << "n5 " << number5 << "n6 " << number6 << "n2 " << endl;
}
int Yahtzee::checkNumber(int number){
	int ammount = 0;
	if (wuerfeArray[0] == number){
		ammount++;
	}
	if (wuerfeArray[1] == number){
		ammount++;
	}	
	if (wuerfeArray[2] == number){
		ammount++;
	}
	if (wuerfeArray[3] == number){
		ammount++;
	}
	if (wuerfeArray[4] == number){
		ammount++;
	}
	return ammount;
}
int Yahtzee::calcScore(int number, int ammount){
	int score = 0;
	if (ammount > 1){
		score = ammount*number;
	}
	if (ammount == 2){
		cout << "1 Paar" << endl;
	}
	if (ammount == 3){
		cout << "3 Gleiche" << endl;
	}
	if (ammount == 4){
		cout << "4 Gleiche" << endl;
	}
	return score;
}
