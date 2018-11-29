// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// File name :		Fruit.h
// Creation :		2018-11-28
// Author :			Danick Massicotte
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Context :		B52_Snake
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Brief :			Classe contenant les données des objets Fruit. 
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#ifndef FRUIT_H
#define FRUIT_H

#include "Point.h"
#include "ConsoleColor.h"

class Fruit
{
private:
	Point mPoint;
	ConsoleColor mColor;

public:
	// Constructeur
	Fruit(int maxX, int maxY, ConsoleColor color = (ConsoleColor::bK + ConsoleColor::tR));

	// Fonctions d'accès et de mutation
	// Retourne l'objet Point(x, y) de l'objet Fruit
	Point getPoint();
	
	// Met les coordonnées x et y dans l'objet Point de l'objet Fruit
	void setPoint(int x, int y);

	// Fonctions de la classe
	// Fonction qui génère aléatoirement des nombre; utilisée pour la position du fruit
	void generate(int maxX, int maxY, int min = 0);

	// Fonction qui permet de dessiner l'objet Fruit
	void draw();
};

#endif // FRUIT_H
