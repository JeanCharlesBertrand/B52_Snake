#include "FSM.h"
#include "GameEngine.h"
#include <iostream>

FSM::FSM()
	:mCurrentState{ GAMESTATE::WELCOME },
	menu{}
{
}

FSM::GAMESTATE FSM::getCurrentState()
{
	return mCurrentState;
};


void FSM::setCurrentState(char kbInput, Player &player)
{
	switch (mCurrentState)
	{
	case GAMESTATE::WELCOME:
		switch (kbInput) 
		{
		case 'o':
		case 'O':
			mCurrentState = GAMESTATE::OPTIONS;
			executeState(player);
			break;
		case 's':
		case 'S':
			mCurrentState = GAMESTATE::START;
			executeState(player);
			break;
		case 'q':
		case 'Q':
			mCurrentState = GAMESTATE::QUIT;
			executeState(player);
			break;
		}
		break;
	case GAMESTATE::OPTIONS:
		switch (kbInput)
		{
		case 'i':
		case 'I':
			mCurrentState = GAMESTATE::INSTRUCTIONS;
			executeState(player);
			break;
		case 'w':
		case 'W':
			mCurrentState = GAMESTATE::WELCOME;
			executeState(player);
			break;
		}
		break;
	case GAMESTATE::INSTRUCTIONS:
		switch (kbInput)
		{
		case 'o':
		case 'O':
			mCurrentState = GAMESTATE::OPTIONS;
			executeState(player);
			break;
		}
		break;
	case GAMESTATE::PAUSE:
		switch (kbInput)
		{
		case 'w':
		case 'W':
			mCurrentState = GAMESTATE::WELCOME;
			executeState(player);
			break;
		case 'o':
		case 'O':
			mCurrentState = GAMESTATE::ONGAME;
			executeState(player);
			break;
		case 'q':
		case 'Q':
			mCurrentState = GAMESTATE::QUIT;
			executeState(player);
			break;
		}
		break;
	case GAMESTATE::QUIT:
		switch (kbInput)
		{
		case 'w':
		case 'W':
			mCurrentState = GAMESTATE::WELCOME;
			executeState(player);
			break;
		case 'e':
		case 'E':
			mCurrentState = GAMESTATE::EXIT;
			executeState(player);
			break;
		}
		break;
	case GAMESTATE::START:
		switch (kbInput)
		{
		case 'g':
		case 'G':
			mCurrentState = GAMESTATE::ONGAME;
			executeState(player);
			break;
		case 'p':
		case 'P':
			mCurrentState = GAMESTATE::PAUSE;
			executeState(player);
			break;
		}
		break;
	case GAMESTATE::ONGAME:
		switch (kbInput)
		{
		case 'p':
		case 'P':
			mCurrentState = GAMESTATE::PAUSE;
			executeState(player);
			break;
		}
		break;
	case GAMESTATE::GAMEOVER:
		switch (kbInput)
		{
		case 'W':
		case 'w':
			mCurrentState = GAMESTATE::WELCOME;
			executeState(player);
			break;

		case 'Q':
		case 'q':
			mCurrentState = GAMESTATE::QUIT;
			executeState(player);
		}
		break;
	};
};

void FSM::executeState(Player &player) 
{
	switch (mCurrentState)
	{
	case GAMESTATE::WELCOME:
		menu.welcome();
		break;
	case GAMESTATE::OPTIONS:
		menu.options();
		break;
	case GAMESTATE::INSTRUCTIONS:
		menu.instructions();
		break;
	case GAMESTATE::PAUSE:
		std::cout << "IN PAUSE" << std::endl;
		break;
	case GAMESTATE::QUIT:
		break;
	case GAMESTATE::START:
		menu.start((player.getLevel() % 3), player);
		break;
	case GAMESTATE::ONGAME:
		engine(player);

		// Vérifie si on doit changer de niveau ou faire un Game Over
		if (player.getLives() > 0) {
			mCurrentState = GAMESTATE::START;
			executeState(player);
		} else if (player.getLives() == 0) {
			mCurrentState = GAMESTATE::GAMEOVER;
			executeState(player);
		}
		break;
	case GAMESTATE::GAMEOVER:
		menu.gameOver(player);
		break;
	};
};
