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
	~Player();

	std::string name();						// Getter
	void setName(std::string inputName);	// Setter

	int lives();
	void setLives(int inputLives);
	
	int score();
	void setScore(int inputScore);
};

#endif // PLAYER_H

