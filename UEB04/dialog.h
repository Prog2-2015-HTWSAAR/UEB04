#ifndef DIALOG_H_
#define DIALOG_H_
#include "yahtzee.h"
#include "Random.h"
#include "TstRandom.h"
/*
* @brief menueFkt()
* @details Oberstes Menue
*/
void menueFkt();
/*
* @brief menueYahtzee()
* @details unteres Menue
*/
void menueYahtzee();
/*
* @brief wurfControl()
* @details Steuerungs Modul fuer Yahtze
* @param maxWurfAnzahl
* @param Spieleranzahl
*/
void wurfControl(int maxWurfAnzahl, int Spieleranzahl);
/*
* @brief delay()
* @details delay fkt windows
* @param ms
*/
inline void delay(unsigned long ms);
#endif /* DIALOG_H_ */
