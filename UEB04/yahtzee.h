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
private:
	int ersterWurf;
	int zweiterWurf;
	int dritterWurf;
	int vierterWurf;
	int fuenfterWurf;
};

#endif