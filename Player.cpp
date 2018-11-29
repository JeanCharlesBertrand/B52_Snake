#include "Player.h"

Player::Player()
	:mName{ "Player1" }, mLives{ 3 }, mScore{0}
{
}

Player::Player(std::string inputName)
	: mName(inputName), mLives{3}, mScore{ 0 }
{
}


Player::Player(std::string inputName, int inputLives = 3)
	:mName(inputName), mLives(inputLives), mScore{0}
{
}


Player::~Player()
{
}


std::string Player::name() 
{
	return mName;
};


void Player::setName(std::string inputName) {
	mName = inputName;
}; 


int Player::lives()
{
	return mLives;
};


void Player::setLives(int inputLives)
{
	mLives = inputLives;
};


int Player::score()
{
	return mScore;
};


void Player::setScore(int inputScore)
{
	mScore = inputScore;
};
