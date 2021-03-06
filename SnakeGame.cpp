#include "SnakeGame.h"
#include "Console"
#include "FSM.h"
#include <conio.h>
#include <iostream>



SnakeGame::SnakeGame()
	: player{ }
{
	ConsoleContext context(120, 40, "B52_SNAKE", 0, 16, L"Consolas");
	Console::defineContext(context);
}


void SnakeGame::go()
{
	
	FSM fsm;	// Cr�ation de l'automate
	FSM::GAMESTATE currState = fsm.getCurrentState();

	char kbInput = ' ';
	std::cout << "Entrer une touche" << std::endl;

	fsm.executeState(player);

	// Loop de menu du jeu
	do {
		if (_kbhit()) {
			kbInput = _getch();
			fsm.setCurrentState(kbInput, player);
		}

		kbInput = ' ';
	
		currState = fsm.getCurrentState();
	} while (currState != FSM::GAMESTATE::QUIT);

}
