// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// File name :		RandomTools.h
// Creation :		2018-11-28
// Author :			JC Demers, Danick Massicotte
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Context :		B52_Snake
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Brief :			Classe contenant les algorithmes pour générer des nombres
//					aléatoires. 
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#ifndef RANDOMTOOLS_H
#define RANDOMTOOLS_H

#include <random>

class RandomTools
{
private:
	// Variables statiques
	static std::random_device sRandomDevice;
	static std::mt19937 sRandomGenerator;

public:
	// Retourne un nombre aléatoire à l'intérieur de l'intervalle donné
	static int randomValue(int min, int max);
};

#endif // RANDOMTOOLS_H