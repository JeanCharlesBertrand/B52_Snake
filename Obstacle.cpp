#include "Obstacle.h"
#include "LevelTools.h"
#include <fstream>
#include <string>

using namespace std;

Obstacle::Obstacle(size_t maxX, size_t maxY, int level, ConsoleColor color)
	:	mColor{ color }
{
	mWalls = generate(maxX, maxY, level);
	//generate(maxX, maxY);
}

Obstacle::~Obstacle()
{
}

std::list<Point> Obstacle::getWalls() const
{
	return mWalls;
}

void Obstacle::draw(ConsoleImage &image)
{
	// Dessine sur la console (&image) chaque points de l'objet Obstacle (mWalls)
	for (auto p : mWalls) {
		image.drawPoint(p.getX(), p.getY(), char(219), mColor);
	}
}