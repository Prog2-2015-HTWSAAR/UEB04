/*
 * TstRandom.cpp
 *
 *  Created on: 22.05.2015
 *      Author: sbastian
 */

#include "TstRandom.h"
#include "Random.h"
#include <iostream>
using namespace std;
TstRandom::TstRandom() {
	// Nothing to do here!
}

TstRandom::~TstRandom() {
	// TODO Auto-generated destructor stub
}

void TstRandom::fillArray(unsigned int *array, int size){
	for(int i=0;i<size;i++){
		array[i]=random.nextInt();
	}
}
void TstRandom::fillArray(unsigned short *array, int size){
	for(int i=0;i<size;i++){
		array[i]=random.nextShort();
	}
}
void TstRandom::fillArray(char *array, int size){
	for(int i=0;i<size;i++){
		array[i]=random.nextPrintableChar();
	}
}
void TstRandom::sortArray(int *array, int size){
	// TODO implement this method!
}
void TstRandom::arrayAusgeben(unsigned int *array, int size){
	for(int i=0; i < size; i++){
		cout << array[i] << " ";
	}
	cout << endl;
}
void TstRandom::arrayAusgeben(unsigned short *array, int size){
	for(int i=0; i < size; i++){
		cout << array[i] << " ";
	}
	cout << endl;
}
void TstRandom::arrayAusgeben(char *array, int size){
	for(int i=0; i < size; i++){
		cout << array[i] << " ";
	}
	cout << endl;
}
bool TstRandom::isSorted(int *array){
	//TODO implement this method!
	return false;
}
void TstRandom::randomDialog(){
	unsigned int *intArray;
	unsigned short *shortArray;
	char *charArray;
	int size=0;

	cout << "Groesse der Arrays: ";
	cin >> size;
	intArray = (unsigned int*) malloc(sizeof(unsigned int)*size);
	shortArray = (unsigned short*) malloc(sizeof(unsigned short)*size);
	charArray = (char*) malloc(sizeof(char)*size);

	fillArray(intArray, size);
	fillArray(shortArray, size);
	fillArray(charArray, size);
	cout << "Int-Array: " << endl;
	arrayAusgeben(intArray, size);
	cout << "Short-Array: " << endl;
	arrayAusgeben(shortArray, size);
	cout << "Char-Array: " << endl;
	arrayAusgeben(charArray, size);
}

