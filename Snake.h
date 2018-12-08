// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// File name :		Snake.h
// Creation :		2018-11-28
// Author :			Danick Massicotte
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Context :		B52_Snake
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Brief :			Classe contenant les données et fonctions des objets 
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
	// Constructeur
	Snake(size_t maxX, size_t maxY, ConsoleColor color = (ConsoleColor::bK + ConsoleColor::tY));

	// Fonctions
	// Retourne la liste de Point mBody du Snake
	std::list<Point> getBody() const;
	
	// Retourne l'état de vie du Snake
	bool getIsAlive() const;

	// Retourne la direction courante de l'objet Snake
	char getDirection() const;

	// Retourne la vitesse courante du Snake
	int getSpeed() const;

	// Change la valeur mSpeed du Snake
	void setSpeed(int speed);

	// Génère le point du Snake initial au milieu de l'écran
	void generate(size_t maxX, size_t maxY);

	// Déplace le corps de l'objet Snake selon les entrées au clavier du joueur
	void move(char direction, int &levelScore, Fruit &fruit, std::list<Point> const &obstacle, size_t maxX, size_t maxY);

	// Vérifie la validité de la touche (input) du joueur
	void inputVerification(char &direction);

	// Calcule le déplacement du Snake selon la direction du Snake
	Point movement(size_t &maxX, size_t &maxY);

	// Vérifie s'il y a collision avec un objet pendant le mouvement
	void checkCollisions(char direction, int &levelScore, Fruit &fruit, std::list<Point> const &obstacle, size_t maxX, size_t maxY);

	// Ajoute des Points au mBody et augmente la vitesse de l'objet Snake
	void grow();

	// Vérifie si le Snake touche à un objet Fruit
	bool touchFruit(Fruit &fruit);

	// Vérifie si le Snake touche à un objet Obstacle
	bool touchWall(std::list<Point> const &obstacle);

	// Vérifie si le Snake entre en collision avec lui-même
	bool touchSnake();

	// Dessine l'objet Snake à l'écran
	void draw(ConsoleImage &image);
};

#endif // SNAKE_H