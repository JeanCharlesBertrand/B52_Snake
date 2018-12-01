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

#include <list>
#include "Point.h"
#include "ConsoleColor.h"
#include "ConsoleImage.h"

class Fruit
{
private:
	// Variables
	Point mPoint;
	ConsoleColor mColor;

public:
	// Constructeur
	Fruit(std::list<Point> snake, std::list<Point> obstacle, 
		size_t maxX, size_t maxY, ConsoleColor color = (ConsoleColor::bK + ConsoleColor::tR));

	// Fonctions d'accès et de mutation
	// Retourne l'objet Point(x, y) de l'objet Fruit
	Point getPoint();
	
	// Met les coordonnées x et y dans l'objet Point de l'objet Fruit
	void setPoint(size_t x, size_t y);

	// Fonctions de la classe
	// Fonction qui génère aléatoirement des nombre; utilisée pour la position du fruit
	void generate(std::list<Point> snake, std::list<Point> obstacle, size_t maxX, size_t maxY, size_t min = 0);

	// Fonction qui permet de dessiner l'objet Fruit
	void draw(ConsoleImage &image);

	// Vérifie si la position pour Fruit est libre
	bool checkPosition(std::list<Point> snake, std::list<Point> obstacle, int x, int y);
};

#endif // FRUIT_H
