/*
 * Random.h
 *
 *  Created on: 19.05.2015
 *      Author: sbastian
 */

#ifndef RANDOM_H_
#define RANDOM_H_
#include <stdlib.h>
#include <time.h>
class Random {
public:
	Random();
	Random(int seed);
	unsigned int nextInt();
	unsigned int nextInt(unsigned int max);
	unsigned short nextShort();
	unsigned short nextShort(short max);
	unsigned char nextPrintableChar();
};

#endif /* RANDOM_H_ */
