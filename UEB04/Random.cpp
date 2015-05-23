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
 * @param max exklusives Maximum darf nicht negativ sein!
 * @returns Zufaelliger Wert zwischen 0 (inklusive) und max (exklusive)
 */
unsigned int Random::nextInt(unsigned int max){
	return (rand() % max);
}
/*
 * @brief Liefert einen zufaelligen unsigned Shortwert
 * @returns Zufaelliger Wert zwischen 0 und SHRT_MAX, inklusive
 */
unsigned short Random::nextShort(){
	return (unsigned short) rand();
}
/*
 * @brief Liefert eine zufaelligen unsigned Shortwert mit einem
 * Vorgegebenen Maximum
 * @param max exklusives Maximum darf nicht negativ sein!
 * @returns Zufaelliger Wert zwischen 0 (inklusive) und max (exklusive)
 */
unsigned short Random::nextShort(short max){
	return (unsigned short) (rand() % max);
}
/*
 * @brief Liefert eine zufaelliges druckbares ASCII-Zeichen
 * @details Umfasst Werte vom Leerzeichen(' ') bis zur Tilde ('~').
 * (siehe ASCI-Tabelle)
 * @returns Zufaelliges zufaelliges druckbares ASCII-Zeichen
 */
unsigned char Random::nextPrintableChar(){
	return nextInt(95)+32;
}
