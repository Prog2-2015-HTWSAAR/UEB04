#include "dialog.h"
#include "Yahtzee.h"

using namespace std;
/*
* @brief menueFkt()
* @details Oberstes Menue
*/
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
			menueYahtzee();
			break;
		default:
			cout << "-> FEHLERHAFTE EINGABE <-" << endl;
		}
	} while (answer != 0);
}
/*
* @brief menueYahtzee()
* @details unteres Menue
*/
void menueYahtzee(){
	int answer;
	int spieleranzahl;

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
			wurfControl(1, 1);
			break;
		case 2:
			wurfControl(5, 1);
			//wurfControl(1);
			break;
		case 3:
			cout << "Spieleranzahl: ";
			cin >> spieleranzahl;
			if (spieleranzahl < 5 && spieleranzahl > 1) {
				wurfControl(5, spieleranzahl);
			}
			else {
				cout << "Spieleranzahl muss zwichen 1 und 5 liegen" << endl;
			}
			break;
		default:
			cout << "-> FEHLERHAFTE EINGABE <-" << endl;
		}
	} while (answer != 0);
}
/*
* @brief wurfControl()
* @details Steuerungs Modul fuer Yahtze
* @param maxWurfAnzahl
* @param Spieleranzahl
*/
void wurfControl(int maxWurfAnzahl, int Spieleranzahl){
	Yahtzee spieler[5];
	int wuerfe = 1;
	int spielercounter = 1;
	do {
		cout << "Spieler " << spielercounter << endl;
		wuerfe = 0;
		while (wuerfe < maxWurfAnzahl){
			
			spieler[wuerfe].werfeFuenfmal();
			wuerfe++;
		}
		if (maxWurfAnzahl != 1){

			spieler[spielercounter].getWuerfe();
			spieler[spielercounter].checkDice();
		}
		else {
			spieler[0].getWurf();
		}
		cout << endl;
		spielercounter++;
		delay(1000);
	} while (spielercounter <= Spieleranzahl);
}

#if defined(__WIN32__) || defined(_WIN32) || defined(WIN32) || defined(__WINDOWS__) || defined(__TOS_WIN__)

#include <windows.h>
/*
* @brief delay()
* @details delay fkt windows
* @param ms
*/
inline void delay(unsigned long ms)
{
	Sleep(ms);
}
/*
* @brief delay()
* @details delay fkt unix
*/
#else  /* presume POSIX */

#include <unistd.h>

inline void delay(unsigned long ms)
{
	usleep(ms * 1000);
}

#endif 