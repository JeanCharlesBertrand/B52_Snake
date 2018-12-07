// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// File name :		FSM.h
// Creation :		2018-11-30
// Author :			Jean-Charles Bertrand
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Context :		B52_Snake
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Brief :			Struture des menus du jeu
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#ifndef MENU_H
#define MENU_H


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
	void start(int inputLevel, Player &player);
	void pause();
	void instructions();
	void quit();
	void gameOver(Player &player);
	void onGame(Player &player);
	void splashLevel1(Player &player);
	void splashLevel2(Player &player);
	void splashLevel3(Player &player);
	void splashGameOver();
};

#endif // MENU_H