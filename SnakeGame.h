// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// File name :		Player.h
// Creation :		2018-11-30
// Author :			Jean-Charles Bertrand
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Context :		B52_Snake
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Brief :			Game entry point
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


#ifndef SNAKEGAME_H
#define SNAKEGAME_H

#include "Player.h"

class SnakeGame
{
private:
	Player player;

public:
	SnakeGame();
	void go();
	~SnakeGame();
};

#endif // SNAKEGAME_H

