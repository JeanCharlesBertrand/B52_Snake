#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "Player.h"
#include "Snake.h"
#include "Fruit.h"
#include "Obstacle.h"

void engine(Player &player);
void processInput(char temp, char &direction);
void render(Player &player, Fruit &fruit, Snake &snake, Obstacle &obstacle, ConsoleWriter &writer, int levelScore);
void endLevel(Player &player, Snake &snake, int &levelScore);

#endif // GAMEENGINE_H

