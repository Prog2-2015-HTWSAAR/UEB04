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
	void sortArray(unsigned int *array, int size);
	void sortArray(unsigned short *array, int size);
	void sortArray(char *array, int size);
	void arrayAusgeben(unsigned int *array, int size);
	void arrayAusgeben(unsigned short *array, int size);
	void arrayAusgeben(char *array, int size);
	bool isSorted(unsigned int *array, int size);
	bool isSorted(unsigned short *array, int size);
	bool isSorted(char *array, int size);
	void randomDialog();
private:
	Random random;
	void swap(unsigned int *array, int pos_a, int pos_b);
	void swap(unsigned short *array, int pos_a, int pos_b);
	void swap(char *array, int pos_a, int pos_b);
};

#endif /* TSTRANDOM_H_ */
