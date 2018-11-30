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

class Player
{
private:
	std::string mName;
	int mLives;
	int mScore;
	
public:
	Player();
	Player(std::string inputName);
	Player(std::string inputName, int inputLives);
	Player(std::string inputName, int inputLives, int inputScore);
	~Player();

	std::string getName();						// Getter
	void setName(std::string inputName);	// Setter

	int getLives();
	void setLives(int inputLives);
	
	int getScore();
	void setScore(int inputScore);
};

#endif // PLAYER_H

