#include "dialog.h"

using namespace std;

void menueFkt(){
	int answer;
	TstRandom testObj;
	do {
		cout << "-------------------------------" << endl;
		cout << "(1) Automatischer Test" << endl;
		cout << "(2) Yahtzee" << endl;
		cout << "(0) -EXIT-" << endl << endl;
		cout << "Waehlen sie eine Option: ";
		cin >> answer;
		switch (answer){
		case 0:
			cout << "ENDE" << endl;
			break;
		case 1:
			testObj.randomDialog();
			break;
		case 2:
			break;
		default:
			cout << "-> FEHLERHAFTE EINGABE <-" << endl;
		}
	} while (answer != 0);
}
void menueYahtzee(){
	int answer;
	TstRandom testObj;
	do {
		cout << "-------------------------------" << endl;
		cout << "(1) Einmal Wurfeln" << endl;
		cout << "(2) Fuenfmal Wuerfeln" << endl;
		cout << "(3) Yahtzee Game" << endl;
		cout << "(0) -EXIT-" << endl << endl;
		cout << "Waehlen sie eine Option: ";
		cin >> answer;
		switch (answer){
		case 0:
			cout << "ENDE" << endl;
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		default:
			cout << "-> FEHLERHAFTE EINGABE <-" << endl;
		}
	} while (answer != 0);
}
