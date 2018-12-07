// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// File name :		Snake.h
// Creation :		2018-11-28
// Author :			Danick Massicotte
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Context :		B52_Snake
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Brief :			Classe contenant les donn�es et fonctions des objets 
//					Snake. 
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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
	// Constructeur et Destructeur
	Snake(size_t maxX, size_t maxY, ConsoleColor color = (ConsoleColor::bK + ConsoleColor::tY));
	~Snake();

	// Fonctions d'acc�s
	// Retourne la liste de Point mBody du Snake
	std::list<Point> getBody();
	
	// Retourne l'�tat de vie du Snake
	bool getIsAlive();

	// Retourne la direction courante de l'objet Snake
	char getDirection();

	// Retourne la vitesse courante du Snake
	int getSpeed();

	// Change la valeur mSpeed du Snake
	void setSpeed(int speed);

	// Fonctions
	// G�n�re le point du Snake initial au milieu de l'�cran
	void generate(size_t maxX, size_t maxY);

	// D�place le corps de l'objet Snake selon les entr�es au clavier du joueur
	void move(char direction, int &levelScore, Fruit &fruit, Obstacle &obstacle, size_t maxX, size_t maxY);

	// Ajoute des Points au mBody et augmente la vitesse de l'objet Snake
	void grow();

	// V�rifie si le Snake touche � un objet Fruit
	bool touchFruit(Fruit &fruit);

	// V�rifie si le Snake touche � un objet Obstacle
	bool touchWall(Obstacle &obstacle);

	// V�rifie si le Snake entre en collision avec lui-m�me
	bool touchSnake();

	// Dessine l'objet Snake � l'�cran
	void draw(ConsoleImage &image);
};

#endif // SNAKE_H