#include "Fruit.h"
#include "RandomTools.h"
#include "ConsoleImage.h"

Fruit::Fruit(size_t maxX, size_t maxY, ConsoleColor color)
	: mColor{ color }
{
	generate(maxX, maxY);
}

Point Fruit::getPoint()
{
	return mPoint;
}

void Fruit::setPoint(size_t x, size_t y)
{
	mPoint.setX(x);
	mPoint.setY(y);
}

void Fruit::generate(size_t maxX, size_t maxY, size_t min)
{
	// Fonction pour générer aléatoirement les coordonnées x
	// et y qui seront utilisés pour les objets Point des fruits
	// créés.

	int x{ RandomTools::randomValue(min, maxX) };
	int y{ RandomTools::randomValue(min, maxY) };

	setPoint(x, y);
}

void Fruit::draw(ConsoleImage &image)
{
	// Fonction pour afficher les fruits dans l'aire de jeu;

	// ConsoleImage fruit{ writer.createImage("fruit") };
	image.drawPoint(mPoint.getX(), mPoint.getY(), char(219), mColor);
	// writer.push("fruit");
}