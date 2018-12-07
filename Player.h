// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// File name :		Player.h
// Creation :		2018-11-28
// Author :			Jean-Charles Bertrand
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Context :		B52_Snake
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Brief :			Classe du joueur 
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "ConsoleImage.h"
#include "ConsoleColor.h"

class Player
{
private:
	std::string mName;
	int mLives;
	int mScore;
	int mLevel;
	
public:
	Player();
	Player(std::string inputName);
	Player(std::string inputName, int inputLives);
	Player(std::string inputName, int inputLives, int inputScore);
	Player(std::string inputName, int inputLives, int inputScore, int inputLevel);
	~Player();

	std::string getName() const;
	void setName(std::string inputName);

	int getLives() const;
	void setLives(int inputLives);
	
	int getScore() const;
	void setScore(int inputScore);

	int getLevel() const;
	void setLevel(int inputLevel);

	void draw(ConsoleImage &image, int levelScore);
};

#endif // PLAYER_H

