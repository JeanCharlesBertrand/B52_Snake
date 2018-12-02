// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// File name :		Obstacle.h
// Creation :		2018-11-28
// Author :			Danick Massicotte
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Context :		B52_Snake
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Brief :			Classe contenant les données et fonctions des objets 
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
	// Constructeur et Destructeur
	Obstacle(size_t maxX, size_t maxY, ConsoleColor color = (ConsoleColor::bK + ConsoleColor::tw));
	~Obstacle();

	// Fonction d'accès
	std::list<Point> getWalls();

	// Fonctions
	// Génère les obstacles du niveau
	void generate1(size_t maxX, size_t maxY);

	// Dessine les points de l'objet Obstacle
	void draw(ConsoleImage &image);
};

#endif // OBSTACLE_H