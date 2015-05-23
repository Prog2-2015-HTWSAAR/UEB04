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
	// NOthing to do here!
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
void TstRandom::sortArray(unsigned int *array, int size){
	bool swapped = false;
	do{
		swapped = false;
		for(int i=0; i<size-1; i++){
			if(array[i] > array[i+1]){
				swap(array,i,i+1);
				swapped = true;
			}
		}
	} while(swapped);
}
void TstRandom::sortArray(unsigned short *array, int size){
	bool swapped = false;
	do{
		swapped = false;
		for(int i=0; i<size-1; i++){
			if(array[i] > array[i+1]){
				swap(array,i,i+1);
				swapped = true;
			}
		}
	} while(swapped);
}
void TstRandom::sortArray(char *array, int size){
	bool swapped = false;
	do{
		swapped = false;
		for(int i=0; i<size-1; i++){
			if(array[i] > array[i+1]){
				swap(array,i,i+1);
				swapped = true;
			}
		}
	} while(swapped);
}
void TstRandom::swap(unsigned int *array, int pos_a, int pos_b){
	unsigned int temp = array[pos_a];
	array[pos_a] = array[pos_b];
	array[pos_b] = temp;
}
void TstRandom::swap(unsigned short *array, int pos_a, int pos_b){
	unsigned short temp = array[pos_a];
	array[pos_a] = array[pos_b];
	array[pos_b] = temp;
}
void TstRandom::swap(char *array, int pos_a, int pos_b){
	char temp = array[pos_a];
	array[pos_a] = array[pos_b];
	array[pos_b] = temp;
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
bool TstRandom::isSorted(unsigned int *array, int size){
	for(int i=0; i < size-1; i++){
		if(array[i] > array[i+1]){
			return false;
		}
	}
	return true;
}
bool TstRandom::isSorted(unsigned short *array, int size){
	for(int i=0; i < size-1; i++){
		if(array[i] > array[i+1]){
			return false;
		}
	}
	return true;
}
bool TstRandom::isSorted(char *array, int size){
	for(int i=0; i < size-1; i++){
		if(array[i] > array[i+1]){
			return false;
		}
	}
	return true;
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
	cout << "RAND_MAX: "<< RAND_MAX << endl;
	cout << endl << "Unsortierte Arrays:" << endl;
	cout << "Int-Array: " << endl;
	arrayAusgeben(intArray, size);
	cout << "Short-Array: " << endl;
	arrayAusgeben(shortArray, size);
	cout << "Char-Array: " << endl;
	arrayAusgeben(charArray, size);

	cout << "Sortiere..." << endl;

	sortArray(intArray, size);
	sortArray(shortArray, size);
	sortArray(charArray, size);

	cout << endl << "Sortierte Arrays:" << endl;
	cout << "Int-Array: " << endl;
	arrayAusgeben(intArray, size);
	cout << "Short-Array: " << endl;
	arrayAusgeben(shortArray, size);
	cout << "Char-Array: " << endl;
	arrayAusgeben(charArray, size);

}

