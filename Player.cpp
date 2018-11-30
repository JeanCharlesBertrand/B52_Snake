
#include "Player.h"

Player::Player()
	: Player{ "Player", 3, 0 }
{
}

Player::Player(std::string inputName)
	: Player{ inputName, 3, 0 }
{
}


Player::Player(std::string inputName, int inputLives)
	: Player{ inputName, inputLives, 0 }
{
}

Player::Player(std::string inputName, int inputLives, int inputScore)
	:mName{ inputName }, mLives{ inputLives }, mScore{ inputScore }
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
