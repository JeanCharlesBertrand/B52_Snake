// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// File name :		GameEngine.h
// Creation :		2018-12-06
// Author :			Danick Massicotte
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Context :		B52_Snake
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Brief :			Engine principal de partie (game loop) pour le jeu Snake
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "Player.h"
#include "Snake.h"
#include "Fruit.h"
#include "Obstacle.h"

// Engin principal de jeu (game loop)
void engine(Player &player);

// Lecture d'entrée de touches
void processInput(char temp, char &direction);

// Affiche l'aire de jeu et ses objets à l'écran
void render(Player &player, Fruit &fruit, Snake &snake, Obstacle &obstacle, ConsoleWriter &writer, int levelScore);

// Vérifie si on passe à un niveau suivant ou si le joueur perd une vie
void endLevel(Player &player, Snake &snake, int &levelScore);

#endif // GAMEENGINE_H

