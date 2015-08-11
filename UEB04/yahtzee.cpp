#include "Yahtzee.h"
using namespace std;
/*
* @brief Standardkonstruktor
*/
Yahtzee::Yahtzee()
{
	this->wuerfeArray[0] = 0;
	this->wuerfeArray[1] = 0;
	this->wuerfeArray[2] = 0;
	this->wuerfeArray[3] = 0;
	this->wuerfeArray[4] = 0;
}

/*
* @brief Standarddekonstruktor
*/
Yahtzee::~Yahtzee()
{
}

/*
* @brief getWuerfe()
* @details  Fkt zum ausgeben aller wuerfe
*/
void Yahtzee::getWuerfe(){
		cout << "Erster   Wurf: " << wuerfeArray[0] << endl;
		cout << "Zweiter  Wurf: " << wuerfeArray[1] << endl;
		cout << "Dritter  Wurf: " << wuerfeArray[2] << endl;
		cout << "Vierter  Wurf: " << wuerfeArray[3] << endl;
		cout << "Fuenfter Wurf: " << wuerfeArray[4] << endl;
}
/*
* @brief getWurf()
* @details  Fkt zum ausgeben eines wurfs
*/
void Yahtzee::getWurf(){
		cout << "Wurf: " << wuerfeArray[0] << endl;
}
/*
* @brief checkDice()
* @details  Fkt zur Punkte ermittlung
*/
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
		cout << "Grosse Strasse 20 Punkte" << endl;
	}
	if ((number1 == 2 || number2 == 2 || number3 == 2 || number4 == 2 || number5 == 2) && (number1 == 3 || number2 == 3 || number3 == 3 || number4 == 3 || number5 == 3)) {
		cout << "Full House 25 Punkte" << endl;
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
}
/*
* @brief checkNumber()
* @details  Fkt zur Ermittlung gleicher Wuerfe
* @param number
*/
int Yahtzee::checkNumber(int number){
	int ammount = 0;
	int arrayCounter = 0;
	while (arrayCounter < 5){
		if (wuerfeArray[arrayCounter] == number){
			ammount++;
		}
		arrayCounter++;
	}
	return ammount;
}
/*
* @brief calcScore()
* @details  Fkt zur Punkte berechnung
* @param number
* @param ammount
*/
int Yahtzee::calcScore(int number, int ammount){
	int score = 0;
	if (ammount > 1){
		score = ammount*number;
	}
	if (ammount == 2){
		cout << "Paar Gefunden" << endl;
	}
	if (ammount == 3){
		cout << "3 Gleiche" << endl;
	}
	if (ammount == 4){
		cout << "4 Gleiche" << endl;
	}
	return score;
}
/*
* @brief werfeFuenfmal()
* @details  Fkt zum fuenfmal generieren
*/
void Yahtzee::werfeFuenfmal(){
	int wurf = 0;
	Random random;
	while (wurf < 5) {
		
		wuerfeArray[wurf] = random.nextInt(6);
		wuerfeArray[wurf]++;
		wurf++;
	}

	
}
