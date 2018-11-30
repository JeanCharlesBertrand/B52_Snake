#ifndef SNAKE_H
#define SNAKE_H

#include <list>
#include <Windows.h>
#include "Point.h"
#include "Fruit.h"
#include "Obstacle.h"
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
	Snake(size_t maxX, size_t maxY, ConsoleColor color = (ConsoleColor::bK + ConsoleColor::tY));
	~Snake();

	// Fonctions d'acc�s
	// Retourne la longueur de la liste mBody
	size_t getSize();

	// Retourne la direction courante de l'objet Snake
	char getDirection();

	// Retourne l'�tat de vie du Snake
	bool getIsAlive();

	// Fonctions
	// G�n�re le point du Snake initial au milieu de l'�cran
	void generate(size_t maxX, size_t maxY);

	// D�place le corps de l'objet Snake selon les entr�es au clavier du joueur
	void move(char direction, Fruit &fruit, Obstacle &obstacle, size_t maxX, size_t maxY);

	// Ajoute des Points au mBody et augmente la vitesse de l'objet Snake
	void grow();

	// Dessine l'objet Snake � l'�cran
	void draw(ConsoleImage &image);

	// V�rifie si le Snake touche � un objet Fruit
	bool touchFruit(Fruit &fruit);

	// V�rifie si le Snake touche � un objet Obstacle
	bool touchWall(Obstacle &obstacle);

	// V�rifie si le Snake entre en collision avec lui-m�me
	bool touchSnake();
};

#endif // SNAKE_H