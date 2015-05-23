#include "dialog.h"
#include "Yahtzee.h"

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
			menueYahtzee();
			break;
		default:
			cout << "-> FEHLERHAFTE EINGABE <-" << endl;
		}
	} while (answer != 0);
}
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
			wurfDialog(1, 1);
			break;
		case 2:
			wurfDialog(5, 1);
			//wurfDialog(1);
			break;
		case 3:
			cout << "Spieleranzahl: ";
			cin >> spieleranzahl;
			wurfDialog(5, spieleranzahl);
			break;
		default:
			cout << "-> FEHLERHAFTE EINGABE <-" << endl;
		}
	} while (answer != 0);
}
void wurfDialog(int maxWurfAnzahl, int Spieleranzahl){
	Yahtzee spieler[100];
	int answer;
	int wuerfe= 1;
	int spielercounter= 0;

	do {
				delay(1000);
				if (wuerfe <= maxWurfAnzahl){
					werfe(spieler[spielercounter], wuerfe);
				}
				else
				{
					cout << "MAX anzahl der Wuerfe Erreicht" << endl;
				}
				spieler[spielercounter].getWuerfe();
				spielercounter++;
			} while (spielercounter <= Spieleranzahl);

}

void werfe(Yahtzee& spieler, int wurfAnzahl){
	int wurf = 0;
	Random random;
	while (wurf == 0) {
		 wurf = random.nextInt(6);
	} 

	spieler.setWurf(wurf, wurfAnzahl);
}
void ausgabe(Yahtzee spieler[], int Spieleranzahl){
	int spielercounter = 1;
	do {
		spieler[spielercounter].getWuerfe();
		spielercounter++;
	} while (spielercounter <= Spieleranzahl);
}

#if defined(__WIN32__) || defined(_WIN32) || defined(WIN32) || defined(__WINDOWS__) || defined(__TOS_WIN__)

#include <windows.h>

inline void delay(unsigned long ms)
{
	Sleep(ms);
}

#else  /* presume POSIX */

#include <unistd.h>

inline void delay(unsigned long ms)
{
	usleep(ms * 1000);
}

#endif 