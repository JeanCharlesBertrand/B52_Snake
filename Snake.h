#ifndef SNAKE_H
#define SNAKE_H

#include <list>
#include <Windows.h>
#include "Point.h"
#include "ConsoleColor.h"
#include "ConsoleImage.h"

class Snake
{
private:
	// Variables
	std::list<Point> mBody;
	ConsoleColor mColor;
	char mDirection;
	int mSpeed;
	bool mAlive;

public:
	// Constructeur
	Snake(size_t maxX, size_t maxY, char direction = 'd', ConsoleColor color = (ConsoleColor::bK + ConsoleColor::tY));

	// Fonctions
	// Fonction qui ajoute des Points au mBody et augmente la vitesse de l'objet Snake
	void growSnake();

	// Fonction qui déplace le corps de l'objet Snake
	void move(char direction);

	// Fonction qui permet de dessiner l'objet Snake
	void draw(ConsoleImage &image);
};

#endif // SNAKE_H