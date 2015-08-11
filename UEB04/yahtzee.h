#ifndef YAHTZEE_H_
#define YAHTZEE_H_
#include <iostream>
#include "Random.h"
#pragma once
class Yahtzee
{
public:
	/*
	* @brief Standardkonstruktor
	*/
	Yahtzee();
	/*
	* @brief Standarddekonstruktor
	*/
	virtual ~Yahtzee();
	/*
	* @brief getWuerfe()
	* @details  Fkt zum ausgeben aller wuerfe
	*/
	void getWuerfe();
	/*
	* @brief getWurf()
	* @details  Fkt zum ausgeben eines wurfs
	*/
	void getWurf();
	/*
	* @brief checkDice()
	* @details  Fkt zur Punkte ermittlung
	*/
	void checkDice();
	/*
	* @brief checkNumber()
	* @details  Fkt zur Ermittlung gleicher Wuerfe
	* @param number
	*/
	int checkNumber(int number);
	/*
	* @brief calcScore()
	* @details  Fkt zur Punkte berechnung
	* @param number
	* @param ammount
	*/
	int calcScore(int number, int ammount);
	/*
	* @brief werfeFuenfmal()
	* @details  Fkt zum fuenfmal generieren
	*/
	void werfeFuenfmal();
private:
	/*
	* @brief wuerfeArray[]
	* @details Speicherung der wuerfe
	*/
	Random random;
	int wuerfeArray[5];
};

#endif
