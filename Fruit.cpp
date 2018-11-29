#include "Fruit.h"
#include "RandomTools.h"

Fruit::Fruit(ConsoleColor color, int maxX, int maxY)
	: mColor{ color }
{
	generate(maxX, maxY);
}

Point Fruit::getPoint()
{
	return mPoint;
}

void Fruit::setPoint(int x, int y)
{
	mPoint.setX(x);
	mPoint.setY(y);
}

void Fruit::generate(int maxX, int maxY, int min)
{
	// Fonction pour générer aléatoirement les coordonnées x
	// et y qui seront utilisés pour les objets Point des fruits
	// créés.

	int x{ RandomTools::randomValue(min, maxX) };
	int y{ RandomTools::randomValue(min, maxY) };

	setPoint(x, y);
}

void Fruit::draw()
{
	// Fonction pour afficher les fruits dans l'aire de jeu;
	// probablement utiliser la console pour ceci et voir
	// comment approcher cette fonction de façon clean.
}