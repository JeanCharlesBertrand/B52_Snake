// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// File name :		Fruit.h
// Creation :		2018-11-28
// Author :			Danick Massicotte
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Context :		B52_Snake
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Brief :			Classe contenant les donn�es des objets Fruit. 
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
	int mValue;

public:
	// Constructeur et Destructeur
	Fruit(std::list<Point> snake, std::list<Point> obstacle, 
		size_t maxX, size_t maxY, ConsoleColor color = (ConsoleColor::bK + ConsoleColor::tR));
	~Fruit();

	// Fonctions d'acc�s et de mutation
	// Retourne l'objet Point(x, y) de l'objet Fruit
	Point getPoint();
	
	// Met les coordonn�es x et y dans l'objet Point de l'objet Fruit
	void setPoint(size_t x, size_t y);

	// Retourne la valeur d'un Fruit (pour scores)
	int getValue();

	// Fonctions de la classe
	// G�n�re al�atoirement des nombre; utilis�e pour la position du fruit
	void generate(std::list<Point> snake, std::list<Point> obstacle, size_t maxX, size_t maxY, size_t min = 0);

	// V�rifie si la position pour Fruit est libre
	bool checkPosition(std::list<Point> snake, std::list<Point> obstacle, int x, int y);

	// Dessine l'objet Fruit � l'�cran
	void draw(ConsoleImage &image);
};

#endif // FRUIT_H
