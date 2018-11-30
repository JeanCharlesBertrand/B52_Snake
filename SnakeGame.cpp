#include "SnakeGame.h"
#include "Console"
#include "FSM.h"
#include <conio.h>
#include <iostream>



SnakeGame::SnakeGame()
{
}


SnakeGame::~SnakeGame()
{
}

void SnakeGame::go()
{
	
	FSM fsm;	// Création de l'automate
	FSM::GAMESTATE currState = fsm.getCurrentState();

	char kbInput = ' ';
	std::cout << "Entrer une touche" << std::endl;

	// Loop de menu du jeu
	do {
		if (_kbhit()) {
			kbInput = _getch();
			fsm.setCurrentState(kbInput);
		}

		kbInput = ' ';
	
		currState = fsm.getCurrentState();
	} while (currState != FSM::GAMESTATE::QUIT);

}
