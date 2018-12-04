#ifndef MENU_H
#define MENU_H
#endif // MENU_H

#include "Snake.h"
#include "Fruit.h"
#include "Obstacle.h"
#include "Player.h"
#include "Console"

class Menu
{
public:
	Menu();
	~Menu();

	void welcome();
	void options();
	void start(int inputLevel);
	void pause();
	void instructions();
	void quit();
	void gameOver();
	void onGame(Player &player);
	void splashLevel1();
	void splashLevel2();
	void splashLevel3();
};

