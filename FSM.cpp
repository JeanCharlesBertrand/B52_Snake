#include "FSM.h"
#include <iostream>

FSM::FSM()
	:mCurrentState{ GAMESTATE::WELCOME },
	menu{}
{
}

FSM::~FSM()
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
		case 'o':
		case 'O':
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
		//std::cout << "IN WELCOME" << std::endl;
		menu.welcome();
		break;
	case GAMESTATE::OPTIONS:
		std::cout << "IN OPTIONS" << std::endl;
		break;
	case GAMESTATE::INSTRUCTIONS:
		std::cout << "IN INSTRUCTIONS" << std::endl;
		break;
	case GAMESTATE::PAUSE:
		std::cout << "IN PAUSE" << std::endl;
		break;
	case GAMESTATE::QUIT:
		std::cout << " IN QUIT" << std::endl;
		break;
	case GAMESTATE::START:
		//std::cout << "IN START" << std::endl;
		menu.start(player.getLevel());
		break;
	case GAMESTATE::ONGAME:
		//std::cout << "IN ONGAME" << std::endl;
		menu.onGame(player);
		if (player.getLives() > 0) {
			mCurrentState = GAMESTATE::START;
			executeState(player);
		}
		break;
	case GAMESTATE::GAMEOVER:
		std::cout << "IN GAMEOVER" << std::endl;
		break;
	};
};
