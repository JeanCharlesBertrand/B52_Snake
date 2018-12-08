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
	Player(std::string inputName, int inputLives, int inputScore, int inputLevel);

	// Retourne le nom du joueur
	std::string getName() const;

	// Change le nom du joueur
	void setName(std::string inputName);

	// Retourne les vies restantes du joueur
	int getLives() const;

	// Change les vies du joueur
	void setLives(int inputLives);
	
	// Retourne le score du joueur
	int getScore() const;

	// Change le score du joueur
	void setScore(int inputScore);

	// Retourne le niveau courant de la partie
	int getLevel() const;

	// Change le niveau courant de la partie
	void setLevel(int inputLevel);

	// Dessine le score du joueur sur le UI de la partie
	void draw(ConsoleImage &image, int levelScore);
};

#endif // PLAYER_H

