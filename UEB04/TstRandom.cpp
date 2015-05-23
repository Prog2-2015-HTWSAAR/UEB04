/*
 * @file TstRandom.cpp
 *
 * @date 22.05.2015
 * @author Andreas Schreiner & Simon Bastian
 */

#include "TstRandom.h"
#include "Random.h"
#include <iostream>
using namespace std;

TstRandom::TstRandom(){}

/*
 * @brief Fuellt ein unsigned int Feld mit zufaelligen Werten
 * @params[out] array Das zu fuellende Feld
 * @params[in] size Groesse des Feldes
 */
void TstRandom::fillArray(unsigned int *array, int size){
	for(int i=0;i<size;i++){
		array[i]=random.nextInt();
	}
}
/*
 * @brief Fuellt ein unsigned short Feld mit zufaelligen Werten
 * @params[out] array Das zu fuellende Feld
 * @params[in] size Groesse des Feldes
 */
void TstRandom::fillArray(unsigned short *array, int size){
	for(int i=0;i<size;i++){
		array[i]=random.nextShort();
	}
}
/*
 * @brief Fuellt ein char Feld mit zufaelligen druckbaren ASCII-Zeichen
 * @params[out] array Das zu fuellende Feld
 * @params[in] size Groesse des Feldes
 */
void TstRandom::fillArray(char *array, int size){
	for(int i=0;i<size;i++){
		array[i]=random.nextPrintableChar();
	}
}
/*
 * @brief Sortiert ein unsigned int Feld
 * @params[in,out] array das zu sortierende Feld
 * @params[in] size Groesse des Feldes
 */
void TstRandom::sortArray(unsigned int *array, int size){
	//Bubble-Sort
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
/*
 * @brief Sortiert ein unsigned short Feld
 * @params[in,out] array das zu sortierende Feld
 * @params[in] size Groesse des Feldes
 */
void TstRandom::sortArray(unsigned short *array, int size){
	//Bubble-Sort
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
/*
 * @brief Sortiert ein char Feld
 * @params[in,out] array das zu sortierende Feld
 * @params[in] size Groesse des Feldes
 */
void TstRandom::sortArray(char *array, int size){
	//Bubble-Sort
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
/*
 * @brieft tauscht zwei Werte eines unsigned int Feldes
 * @params[in,out] array das Feld
 * @params pos_a Position des erste Wertes
 * @params pos_b Position des zweiten Wertes
 */
void TstRandom::swap(unsigned int *array, int pos_a, int pos_b){
	unsigned int temp = array[pos_a];
	array[pos_a] = array[pos_b];
	array[pos_b] = temp;
}
/*
 * @brieft tauscht zwei Werte eines unsigned short Feldes
 * @params[in,out] array das Feld
 * @params pos_a Position des erste Wertes
 * @params pos_b Position des zweiten Wertes
 */
void TstRandom::swap(unsigned short *array, int pos_a, int pos_b){
	unsigned short temp = array[pos_a];
	array[pos_a] = array[pos_b];
	array[pos_b] = temp;
}
/*
 * @brieft tauscht zwei Werte eines char Feldes
 * @params[in,out] array das Feld
 * @params pos_a Position des erste Wertes
 * @params pos_b Position des zweiten Wertes
 */
void TstRandom::swap(char *array, int pos_a, int pos_b){
	char temp = array[pos_a];
	array[pos_a] = array[pos_b];
	array[pos_b] = temp;
}
/*
 * @brief Gibt ein unsigned int Feld aus
 * @params array das Feld
 * @params size Groesse des Feldes
 */
void TstRandom::arrayAusgeben(unsigned int *array, int size){
	for(int i=0; i < size; i++){
		cout << array[i] << " ";
	}
	cout << endl;
}
/*
 * @brief Gibt ein unsigned short Feld aus
 * @params array das Feld
 * @params size Groesse des Feldes
 */
void TstRandom::arrayAusgeben(unsigned short *array, int size){
	for(int i=0; i < size; i++){
		cout << array[i] << " ";
	}
	cout << endl;
}
/*
 * @brief Gibt ein char Feld aus
 * @params array das Feld
 * @params size Groesse des Feldes
 */
void TstRandom::arrayAusgeben(char *array, int size){
	for(int i=0; i < size; i++){
		cout << array[i] << " ";
	}
	cout << endl;
}
/*
 * @brief Ueberprueft die Sortiertheit eines unsigned int Feldes
 * @params array das Feld
 * @params size Groesse des Feldes
 * @returns true wenn das Feld sortiert ist, sonst false
 */
bool TstRandom::isSorted(unsigned int *array, int size){
	for(int i=0; i < size-1; i++){
		if(array[i] > array[i+1]){
			return false;
		}
	}
	return true;
}
/*
 * @brief Ueberprueft die Sortiertheit eines unsigned short Feldes
 * @params array das Feld
 * @params size Groesse des Feldes
 * @returns true wenn das Feld sortiert ist, sonst false
 */
bool TstRandom::isSorted(unsigned short *array, int size){
	for(int i=0; i < size-1; i++){
		if(array[i] > array[i+1]){
			return false;
		}
	}
	return true;
}
/*
 * @brief Ueberprueft die Sortiertheit eines char Feldes
 * @params array das Feld
 * @params size Groesse des Feldes
 * @returns true wenn das Feld sortiert ist, sonst false
 */
bool TstRandom::isSorted(char *array, int size){
	for(int i=0; i < size-1; i++){
		if(array[i] > array[i+1]){
			return false;
		}
	}
	return true;
}
/*
 * @brief Dialog der fuer ein vom Benutzer angegebene Groesse
 * Felder erzeugt, sie fuellt, und sortiert
 *
 */
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
	cout << endl << "Zufaellige Arrays:" << endl;
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

