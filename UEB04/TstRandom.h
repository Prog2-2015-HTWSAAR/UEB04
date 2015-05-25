/*
 * @file TstRandom.h
 *
 * @date 22.05.2015
 * @author Andreas Schreiner & Simon Bastian
 */

#ifndef TSTRANDOM_H_
#define TSTRANDOM_H_
#include "Random.h"

class TstRandom {
public:
	TstRandom();
	/*
	 * @brief Fuellt ein unsigned int Feld mit zufaelligen Werten
	 * @param[out] array Das zu fuellende Feld
	 * @param[in] size Groesse des Feldes
	 */
	void fillArray(unsigned int *array, int size);
	/*
	 * @brief Fuellt ein unsigned short Feld mit zufaelligen Werten
	 * @param[out] array Das zu fuellende Feld
	 * @param[in] size Groesse des Feldes
	 */
	void fillArray(unsigned short *array, int size);
	/*
	 * @brief Fuellt ein char Feld mit zufaelligen druckbaren ASCII-Zeichen
	 * @param[out] array Das zu fuellende Feld
	 * @param[in] size Groesse des Feldes
	 */
	void fillArray(char *array, int size);
	/*
	 * @brief Sortiert ein unsigned int Feld
	 * @param[in,out] array das zu sortierende Feld
	 * @param[in] size Groesse des Feldes
	 */
	void sortArray(unsigned int *array, int size);
	/*
	 * @brief Sortiert ein unsigned short Feld
	 * @param[in,out] array das zu sortierende Feld
	 * @param[in] size Groesse des Feldes
	 */
	void sortArray(unsigned short *array, int size);
	/*
	 * @brief Sortiert ein char Feld
	 * @param[in,out] array das zu sortierende Feld
	 * @param[in] size Groesse des Feldes
	 */
	void sortArray(char *array, int size);
	/*
	 * @brief Gibt ein unsigned int Feld aus
	 * @param array das Feld
	 * @param size Groesse des Feldes
	 */
	void arrayAusgeben(unsigned int *array, int size);
	/*
	 * @brief Gibt ein unsigned short Feld aus
	 * @param array das Feld
	 * @param size Groesse des Feldes
	 */
	void arrayAusgeben(unsigned short *array, int size);
	/*
	 * @brief Gibt ein char Feld aus
	 * @param array das Feld
	 * @param size Groesse des Feldes
	 */
	void arrayAusgeben(char *array, int size);
	/*
	 * @brief Ueberprueft die Sortiertheit eines unsigned int Feldes
	 * @param array das Feld
	 * @param size Groesse des Feldes
	 * @returns true wenn das Feld sortiert ist, sonst false
	 */
	bool isSorted(unsigned int *array, int size);
	/*
	 * @brief Ueberprueft die Sortiertheit eines unsigned short Feldes
	 * @param array das Feld
	 * @param size Groesse des Feldes
	 * @returns true wenn das Feld sortiert ist, sonst false
	 */
	bool isSorted(unsigned short *array, int size);
	/*
	 * @brief Ueberprueft die Sortiertheit eines char Feldes
	 * @param array das Feld
	 * @param size Groesse des Feldes
	 * @returns true wenn das Feld sortiert ist, sonst false
	 */
	bool isSorted(char *array, int size);
	/*
	 * @brief Dialog der fuer ein vom Benutzer angegebene Groesse
	 * Felder erzeugt, sie fuellt, und sortiert
	 *
	 */
	void randomDialog();
private:
	Random random;
	/*
	 * @brieft tauscht zwei Werte eines unsigned int Feldes
	 * @param[in,out] array das Feld
	 * @param pos_a Position des erste Wertes
	 * @param pos_b Position des zweiten Wertes
	 */
	void swap(unsigned int *array, int pos_a, int pos_b);
	/*
	 * @brieft tauscht zwei Werte eines unsigned short Feldes
	 * @param[in,out] array das Feld
	 * @param pos_a Position des erste Wertes
	 * @param pos_b Position des zweiten Wertes
	 */
	void swap(unsigned short *array, int pos_a, int pos_b);
	/*
	 * @brieft tauscht zwei Werte eines char Feldes
	 * @param[in,out] array das Feld
	 * @param pos_a Position des erste Wertes
	 * @param pos_b Position des zweiten Wertes
	 */
	void swap(char *array, int pos_a, int pos_b);
};

#endif /* TSTRANDOM_H_ */
