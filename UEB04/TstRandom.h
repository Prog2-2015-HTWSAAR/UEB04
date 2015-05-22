/*
 * TstRandom.h
 *
 *  Created on: 22.05.2015
 *      Author: sbastian
 */

#ifndef TSTRANDOM_H_
#define TSTRANDOM_H_
#include "Random.h"

class TstRandom {
public:
	TstRandom();
	virtual ~TstRandom();
	void fillArray(unsigned int *array, int size);
	void fillArray(unsigned short *array, int size);
	void fillArray(char *array, int size);
	void sortArray(int *array, int size);
	void arrayAusgeben(unsigned int *array, int size);
	void arrayAusgeben(unsigned short *array, int size);
	void arrayAusgeben(char *array, int size);
	bool isSorted(int *array);
	void randomDialog();
private:
	Random random;
};

#endif /* TSTRANDOM_H_ */
