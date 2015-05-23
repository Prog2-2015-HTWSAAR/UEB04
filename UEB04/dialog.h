#ifndef DIALOG_H_
#define DIALOG_H_
#include "yahtzee.h"
#include "Random.h"
#include "TstRandom.h"
void menueFkt();
void menueYahtzee();
void wurfDialog(int maxWurfAnzahl, int Spieleranzahl);
void werfe(Yahtzee& spieler, int wurfAnzahl);
#endif /* DIALOG_H_ */
