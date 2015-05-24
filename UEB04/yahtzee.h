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
	void checkDice();
	int checkNumber(int number);
	int calcScore(int number, int ammount);

private:
	int wuerfeArray[5];
};

#endif
