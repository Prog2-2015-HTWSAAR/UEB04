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
 * @param[out] array Das zu fuellende Feld
 * @param[in] size Groesse des Feldes
 */
void TstRandom::fillArray(unsigned int *array, int size){
	for(int i=0;i<size;i++){
		array[i]=random.nextInt();
	}
}
/*
 * @brief Fuellt ein unsigned short Feld mit zufaelligen Werten
 * @param[out] array Das zu fuellende Feld
 * @param[in] size Groesse des Feldes
 */
void TstRandom::fillArray(unsigned short *array, int size){
	for(int i=0;i<size;i++){
		array[i]=random.nextShort();
	}
}
/*
 * @brief Fuellt ein char Feld mit zufaelligen druckbaren ASCII-Zeichen
 * @param[out] array Das zu fuellende Feld
 * @param[in] size Groesse des Feldes
 */
void TstRandom::fillArray(char *array, int size){
	for(int i=0;i<size;i++){
		array[i]=random.nextPrintableChar();
	}
}
/*
 * @brief Sortiert ein Feld
 * @param[in,out] array das zu sortierende Feld
 * @param[in] size Groesse des Feldes
 */
template<typename T>
void TstRandom::sortArray(T *array, int size){
	//Bubble-Sort
	bool isSwapped = false;
	int grenze = size-1;
	do{
		isSwapped = false;
		for(int i=0; i<grenze; i++){
			if(array[i] > array[i+1]){
				swap(array,i,i+1);
				isSwapped = true;
			}
		}
	} while(isSwapped);
}


/*
 * @brieft tauscht zwei Werte eines Feldes
 * @param[in,out] array das Feld
 * @param pos_a Position des erste Wertes
 * @param pos_b Position des zweiten Wertes
 */
template<typename T>
void TstRandom::swap(T *array, int pos_a, int pos_b){
	T temp = array[pos_a];
	array[pos_a] = array[pos_b];
	array[pos_b] = temp;
}

/*
 * @brief Gibt ein Feld aus
 * @param array das Feld
 * @param size Groesse des Feldes
 */
template<typename T>
void TstRandom::arrayAusgeben(T *array, int size){
	for(int i=0; i < size; i++){
		cout << array[i] << " ";
	}
	cout << endl;
}

/*
 * @brief Ueberprueft die Sortiertheit eines Feldes
 * @param array das Feld
 * @param size Groesse des Feldes
 * @returns true wenn das Feld sortiert ist, sonst false
 */
template<typename T>
bool TstRandom::isSorted(T *array, int size){
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
	intArray = new unsigned int[size];
	shortArray = new unsigned short[size];
	charArray = new char[size];

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

