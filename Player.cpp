
#include "Player.h"

Player::Player()
	: mName{ "Player" },
	mLives{ 3 },
	mScore{ 0 },
	mLevel{ 1 }
	//Player{ "Player", 3, 0, 1 }
{
}

Player::Player(std::string inputName)
	: Player{ inputName, 3, 0, 1 }
{
}


Player::Player(std::string inputName, int inputLives)
	: Player{ inputName, inputLives, 0 }
{
}

Player::Player(std::string inputName, int inputLives, int inputScore)
	:mName{ inputName }, mLives{ inputLives }, mScore{ inputScore }, mLevel{ 1 }
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

void Player::setLevel(int level)
{
	mLevel = level;
}

void Player::draw(ConsoleImage &image)
{
	ConsoleColor color{ ConsoleColor::bK + ConsoleColor::tW };
	std::string score{ "Score: " + std::to_string(mScore) };
	std::string lives{ "Vies: " + std::to_string(mLives) };
	std::string level{ "Niveau " + std::to_string(mLevel) };

	image.drawText(1, 0, mName, color);
	image.drawText(1, 1, score, color);
	image.drawText((image.width() - lives.length() - 1), 0, lives, color);
	image.drawText((image.width() - level.length() - 1), 1, level, color);
}