#include "Player.h"

Player::Player()
	: Player { "Player 1", 3, 0, 1 }
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


std::string Player::getName() const
{
	return mName;
};


void Player::setName(std::string inputName) {
	mName = inputName;
}; 


int Player::getLives() const
{
	return mLives;
};


void Player::setLives(int inputLives)
{
	mLives = inputLives;
};


int Player::getScore() const
{
	return mScore;
};


void Player::setScore(int inputScore)
{
	mScore = inputScore;
};


int Player::getLevel() const
{
	return mLevel;
}

void Player::setLevel(int inputLevel)
{
	mLevel = inputLevel;
}

void Player::draw(ConsoleImage &image, int levelScore)
{
	ConsoleColor color{ ConsoleColor::bK + ConsoleColor::tW };
	std::string score{ "Score: " + std::to_string(mScore + levelScore) };
	std::string lives{ "Vies: " + std::to_string(mLives) };
	std::string level{ "Niveau " + std::to_string(mLevel) };

	image.drawText(1, 0, mName, color);
	image.drawText(1, 1, score, color);
	image.drawText((image.width() - lives.length() - 1), 0, lives, color);
	image.drawText((image.width() - level.length() - 1), 1, level, color);
}