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
	 * @brief Sortiert ein Feld
	 * @param[in,out] array das zu sortierende Feld
	 * @param[in] size Groesse des Feldes
	 */
	template<typename T>
	void sortArray(T *array, int size);
	/*
	 * @brief Gibt ein Feld aus
	 * @param array das Feld
	 * @param size Groesse des Feldes
	 */
	template<typename T>
	void arrayAusgeben(T *array, int size);
	/*
	 * @brief Ueberprueft die Sortiertheit eines Feldes
	 * @param array das Feld
	 * @param size Groesse des Feldes
	 * @returns true wenn das Feld sortiert ist, sonst false
	 */
	template <typename T>
	bool isSorted(T *array, int size);

	/*
	 * @brief Dialog der fuer ein vom Benutzer angegebene Groesse
	 * Felder erzeugt, sie fuellt, und sortiert
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
	template<typename T>
	void swap(T *array, int pos_a, int pos_b);
};

#endif /* TSTRANDOM_H_ */
