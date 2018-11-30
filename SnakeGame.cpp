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

	enum gameState
	{
		STATE_WELCOME,
		STATE_OPTIONS,
		STATE_INSTRUCTIONS,
		STATE_QUIT,
		STATE_PAUSE,
		STATE_EXIT,
		STATE_START,
		STATE_ONGAME,
		STATE_GAMEOVER,
	};

	

	// À vérifier avec Jean-Christophe
	//FSM fsm;	// Création de l'automate
	//gameState currState = fsm.getCurrentState();
	
	
	gameState currState = STATE_WELCOME;

	char kbInput = ' ';

	// Loop de menu du jeu
	do {
	
		if (_kbhit()) {
			kbInput = _getch();
		}

		switch (currState) 
		{
		case STATE_WELCOME:
			std::cout << "IN STATE_WELCOME" << std::endl;
			kbInput = _getch();
			if (kbInput == 'o')
				currState = STATE_OPTIONS;
			else if (kbInput == 's')
				currState = STATE_START;
			else if (kbInput == 'q')
				currState = STATE_QUIT;
			break;
		case STATE_OPTIONS:
			std::cout << "IN STATE_OPTIONS" << std::endl;
			kbInput = _getch();
			if (kbInput == 'i')
				currState = STATE_INSTRUCTIONS;
			else if (kbInput == 'w')
				currState = STATE_WELCOME;
			break;
		case STATE_INSTRUCTIONS:
			std::cout << "IN STATE_INSTRUCTIONS" << std::endl;
			kbInput = _getch();
			if (kbInput == 'o')
				currState = STATE_OPTIONS;
			break;
		case STATE_PAUSE:
			std::cout << "IN STATE_PAUSE" << std::endl;
			kbInput = _getch();
			if (kbInput == 'w')
				currState = STATE_WELCOME;
			else if (kbInput == 'o')
				currState = STATE_ONGAME;
			else if (kbInput == 'q')
				currState = STATE_QUIT;
			break;
		case STATE_QUIT:
			std::cout << "IN STATE_QUIT" << std::endl;
			kbInput = _getch();
			if (kbInput == 'w')
				currState = STATE_WELCOME;
			else if (kbInput == 'e')
				currState = STATE_EXIT;
			break;
		case STATE_START:
			std::cout << "IN STATE_START" << std::endl;
			kbInput = _getch();
			if (kbInput == 'o')
				currState = STATE_ONGAME;
			else if (kbInput == 'p')
				currState = STATE_PAUSE;
			break;
		case STATE_ONGAME:
			std::cout << "IN STATE_ONGAME" << std::endl;
			kbInput = _getch();
			if (kbInput == 'p')
				currState = STATE_PAUSE;
			else if (kbInput == 'g')
				currState = STATE_GAMEOVER;
			break;
		case STATE_GAMEOVER:
			std::cout << "IN STATE_GAMEOVER" << std::endl;
			kbInput = _getch();
			if (kbInput == 'w')
				currState = STATE_WELCOME;
			else if (kbInput == 'q')
				currState = STATE_QUIT;
			break;
		}

		kbInput == ' ';
	
	} while (currState != STATE_EXIT);

}
