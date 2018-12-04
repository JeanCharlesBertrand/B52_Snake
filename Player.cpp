
#include "Player.h"

Player::Player()
	: Player { "Player", 3, 0, 1 }
{
}

Player::Player(std::string inputName)
	: Player{ inputName, 3, 0, 1 }
{
}


Player::Player(std::string inputName, int inputLives)
	: Player{ inputName, 3, 0, 1 }
{
}

Player::Player(std::string inputName, int inputLives, int inputScore, int inputLevel)
	: mName{ inputName }, mLives{ inputLives }, mScore{ inputScore }, mLevel{ inputLevel }
{
}


Player::~Player()
{
}


std::string Player::getName() 
{
	return mName;
};


void Player::setName(std::string inputName) {
	mName = inputName;
}; 


int Player::getLives()
{
	return mLives;
};


void Player::setLives(int inputLives)
{
	mLives = inputLives;
};


int Player::getScore()
{
	return mScore;
};


void Player::setScore(int inputScore)
{
	mScore = inputScore;
};


int Player::getLevel()
{
	return mLevel;
}

void Player::setLevel(int inputLevel)
{
	mLevel = inputLevel;
}