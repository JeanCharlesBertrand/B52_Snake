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

	// Fonctions d'accès
	// Retourne la longueur de la liste mBody
	size_t getSize();

	// Retourne la direction courante de l'objet Snake
	char getDirection();

	// Retourne l'état de vie du Snake
	bool getIsAlive();

	// Fonctions
	// Génère le point du Snake initial au milieu de l'écran
	void generate(size_t maxX, size_t maxY);

	// Déplace le corps de l'objet Snake selon les entrées au clavier du joueur
	void move(char direction, Fruit &fruit, Obstacle &obstacle, size_t maxX, size_t maxY);

	// Ajoute des Points au mBody et augmente la vitesse de l'objet Snake
	void grow();

	// Dessine l'objet Snake à l'écran
	void draw(ConsoleImage &image);

	// Vérifie si le Snake touche à un objet Fruit
	bool touchFruit(Fruit &fruit);

	// Vérifie si le Snake touche à un objet Obstacle
	bool touchWall(Obstacle &obstacle);

	// Vérifie si le Snake entre en collision avec lui-même
	bool touchSnake();
};

#endif // SNAKE_H