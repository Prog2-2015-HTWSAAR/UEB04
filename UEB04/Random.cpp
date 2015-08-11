/*
 * @file Random.cpp
 *
 * @date 19.05.2015
 * @date Andreas Schreiner & Simon Bastian
 */

#include "Random.h"
/*
 * @brief Standardkonstruktor
 * @details Initialisiert den Pseudozufallszahlengenerator
 * 			mit der Systemzeit als Seed
 */
Random::Random() {
	srand(time(0));
}
/*
 * @brief SeedKonstruktor
 * @details Initialisiert den Pseudozufallszahlengenerator
 * 			mit einem vorgegebenen Seed
 * @param seed Vorgabeseed
 */
Random::Random(int seed){
	srand(seed);
}
/*
 * @brief Liefert einen zufaelligen unsigned Integerwert
 * @returns Zufaelliger Wert zwischen 0 und RAND_MAX, inklusive
 */
unsigned int Random::nextInt(){
	return rand();
}
/*
 * @brief Liefert eine zufaelligen unsigned Integerwert mit einem
 * Vorgegebenen Maximum
 * @param max exklusives Maximum muss positiv sein!
 * @returns Zufaelliger Wert zwischen 0 (inklusive) und max (exklusive)
 */
unsigned int Random::nextInt(unsigned int max){
	unsigned int erg = 0;
	if(max <= 0){
		throw "Die Obere Grenze muss positiv sein!";
	}
	erg = nextInt() % max;
	return erg;
}
/*
 * @brief Liefert einen zufaelligen unsigned Shortwert
 * @returns Zufaelliger Wert zwischen 0 und SHRT_MAX, inklusive
 */
unsigned short Random::nextShort(){
	return (unsigned short) nextInt();
}
/*
 * @brief Liefert eine zufaelligen unsigned Shortwert mit einem
 * Vorgegebenen Maximum
 * @param max exklusives Maximum muss positiv sein!
 * @returns Zufaelliger Wert zwischen 0 (inklusive) und max (exklusive)
 */
unsigned short Random::nextShort(short max){
	unsigned short erg = 0;
	if(max <= 0){
		throw "Die Obere Grenze muss positiv sein!";
	}
	erg = (unsigned short) (nextInt() % max);
	return erg;
}
/*
 * @brief Liefert eine zufaelliges druckbares ASCII-Zeichen
 * @details Umfasst Werte vom Leerzeichen(' ') bis zur Tilde ('~').
 * (siehe ASCI-Tabelle)
 * @returns Zufaelliges zufaelliges druckbares ASCII-Zeichen
 */
unsigned char Random::nextPrintableChar(){
	return nextInt(rangeOfPrintableChars)+firstPrintableChar;
}
