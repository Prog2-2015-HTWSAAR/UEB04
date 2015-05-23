#ifndef YAHTZEE_H_
#define YAHTZEE_H_
#include <iostream>
#include "Random.h"
#pragma once
class Yahtzee
{
public:
	Yahtzee();
	virtual ~Yahtzee();
	void getWuerfe();
	void setWurf(int value, int wurfNummer);
	void Yahtzee::checkDice();
	int Yahtzee::checkNumber(int number);
	int Yahtzee::calcScore(int number, int ammount);
private:
	int ersterWurf;
	int zweiterWurf;
	int dritterWurf;
	int vierterWurf;
	int fuenfterWurf;
};

#endif