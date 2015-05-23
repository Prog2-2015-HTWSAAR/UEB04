/*
 * @file Random.h
 *
 * @date 19.05.2015
 * @author: Andreas Schreiner & Simon Bastian
 */

#ifndef RANDOM_H_
#define RANDOM_H_
#include <stdlib.h>
#include <time.h>
#include <limits.h>
/*
 * Eine Klasse zur Erzeugung von Zufallswerten
 */
class Random {
public:
	/*
	 * @brief Standardkonstruktor
	 * @details Initialisiert den Pseudozufallszahlengenerator
	 * 			mit der Systemzeit als Seed
	 */
	Random();
	/*
	 * @brief SeedKonstruktor
	 * @details Initialisiert den Pseudozufallszahlengenerator
	 * 			mit einem vorgegebenen Seed
	 * @param seed Vorgabeseed
	 */
	Random(int seed);
	/*
	 * @brief Liefert einen zufaelligen unsigned Integerwert
	 * @returns Zufaelliger Wert zwischen 0 und RAND_MAX, inklusive
	 */
	unsigned int nextInt();
	/*
	 * @brief Liefert eine zufaelligen unsigned Integerwert mit einem
	 * Vorgegebenen Maximum
	 * @param max exklusives Maximum darf nicht negativ sein!
	 * @returns Zufaelliger Wert zwischen 0 (inklusive) und max (exklusive)
	 */
	unsigned int nextInt(unsigned int max);
	/*
	 * @brief Liefert einen zufaelligen unsigned Shortwert
	 * @returns Zufaelliger Wert zwischen 0 und SHRT_MAX, inklusive
	 */
	unsigned short nextShort();
	/*
	 * @brief Liefert eine zufaelligen unsigned Shortwert mit einem
	 * Vorgegebenen Maximum
	 * @param max exklusives Maximum darf nicht negativ sein!
	 * @returns Zufaelliger Wert zwischen 0 (inklusive) und max (exklusive)
	 */
	unsigned short nextShort(short max);
	/*
	 * @brief Liefert eine zufaelliges druckbares ASCII-Zeichen
	 * @details Umfasst Werte vom Leerzeichen(' ') bis zur Tilde ('~').
	 * (siehe ASCI-Tabelle)
	 * @returns Zufaelliges zufaelliges druckbares ASCII-Zeichen
	 */
	unsigned char nextPrintableChar();
};

#endif /* RANDOM_H_ */
