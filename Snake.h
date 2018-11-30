#ifndef SNAKE_H
#define SNAKE_H

#include <list>
#include <Windows.h>
#include "Point.h"
#include "ConsoleColor.h"
#include "ConsoleImage.h"
#include "ConsoleKeyReader.h"

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
	// Génère le point du Snake initial au milieu de l'écran
	void generate(size_t maxX, size_t maxY);

	// Déplace le corps de l'objet Snake selon les entrées au clavier du joueur
	void move(char direction);

	// Ajoute des Points au mBody et augmente la vitesse de l'objet Snake
	void grow();

	// Dessine l'objet Snake à l'écran
	void draw(ConsoleImage &image);
};

#endif // SNAKE_H