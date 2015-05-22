/*
 * Random.cpp
 *
 *  Created on: 19.05.2015
 *      Author: sbastian
 */

#include "Random.h"

Random::Random() {
	srand(time(0));
}
Random::Random(int seed){
	srand(seed);
}
unsigned int Random::nextInt(){
	return rand();
}
unsigned int Random::nextInt(unsigned int max){
	return (rand() % max);
}
unsigned short Random::nextShort(){
	return (unsigned short) rand();
}
unsigned short Random::nextShort(short max){
	return (unsigned short) (rand() % max);
}
unsigned char Random::nextPrintableChar(){
	return nextInt(94)+33;
}
