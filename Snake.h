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
	// G�n�re le point du Snake initial au milieu de l'�cran
	void generate(size_t maxX, size_t maxY);

	// D�place le corps de l'objet Snake selon les entr�es au clavier du joueur
	void move(char direction);

	// Ajoute des Points au mBody et augmente la vitesse de l'objet Snake
	void grow();

	// Dessine l'objet Snake � l'�cran
	void draw(ConsoleImage &image);
};

#endif // SNAKE_H