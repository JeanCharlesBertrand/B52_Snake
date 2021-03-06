// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// File name :		Obstacle.h
// Creation :		2018-11-28
// Author :			Danick Massicotte
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Context :		B52_Snake
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Brief :			Classe contenant les donn�es et fonctions des objets 
//					Obstacles. 
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <list>
#include "Point.h"
#include "ConsoleColor.h"
#include "ConsoleImage.h"

class Obstacle
{
private:
	std::list<Point> mWalls;
	ConsoleColor mColor;

public:
	// Constructeur
	Obstacle(size_t maxX, size_t maxY, int level, ConsoleColor color = (ConsoleColor::bK + ConsoleColor::tw));

	// Fonction
	std::list<Point> getWalls() const;

	// Dessine les points de l'objet Obstacle
	void draw(ConsoleImage &image);
};

#endif // OBSTACLE_H