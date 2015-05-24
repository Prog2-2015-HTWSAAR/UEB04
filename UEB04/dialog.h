#ifndef DIALOG_H_
#define DIALOG_H_
#include "yahtzee.h"
#include "Random.h"
#include "TstRandom.h"
void menueFkt();
void menueYahtzee();
void wurfControl(int maxWurfAnzahl, int Spieleranzahl);
void werfe(Yahtzee& spieler, int wurfAnzahl);
inline void delay(unsigned long ms);

#endif /* DIALOG_H_ */
