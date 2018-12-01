#include "Obstacle.h"

Obstacle::Obstacle(size_t maxX, size_t maxY, ConsoleColor color)
	:	mColor{ color }
{
	generate(maxX, maxY);
}

Obstacle::~Obstacle()
{
}

std::list<Point> Obstacle::getWalls()
{
	return mWalls;
}

void Obstacle::generate(size_t maxX, size_t maxY)
{
	size_t xGapTop{ (maxX / 2) - 3 };
	size_t xGapBottom{ (maxX / 2) + 3 };
	size_t yGapTop{ (maxY / 2) - 3 };
	size_t yGapBottom{ (maxY / 2) + 3 };

	for (size_t i = 0; i < maxX; ++i) {
		if (i < xGapTop || i > xGapBottom) {
			Point p1{ i, 0 };			// Créé le mur du haut
			Point p2{ i, maxY - 1 };		// Créé le mur du bas

			mWalls.push_back(p1);
			mWalls.push_back(p2);
		}
	}

	for (size_t i = 0; i < maxY; ++i) {
		if (i < yGapTop || i > yGapBottom) {
			Point p1{ 0, i };
			Point p2{ maxX - 1, i };

			mWalls.push_back(p1);		// Créé le mur de gauche
			mWalls.push_back(p2);		// Créé le mur de droite
		}
	}
}

void Obstacle::draw(ConsoleImage &image)
{
	// Dessine sur la console (&image) chaque points de l'objet Obstacle (mWalls)
	for (auto p : mWalls) {
		image.drawPoint(p.getX(), p.getY(), char(219), mColor);
	}
}