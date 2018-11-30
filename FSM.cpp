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


void FSM::setCurrentState(char kbInput)
{
	switch (mCurrentState)
	{
	case GAMESTATE::WELCOME:
		switch (kbInput) 
		{
		case 'o':
		case 'O':
			mCurrentState = GAMESTATE::OPTIONS;
			executeState();
			break;
		case 's':
		case 'S':
			mCurrentState = GAMESTATE::START;
			executeState();
			break;
		case 'q':
		case 'Q':
			mCurrentState = GAMESTATE::QUIT;
			executeState();
			break;
		}
		break;
	case GAMESTATE::OPTIONS:
		switch (kbInput)
		{
		case 'i':
		case 'I':
			mCurrentState = GAMESTATE::INSTRUCTIONS;
			executeState();
			break;
		case 'w':
		case 'W':
			mCurrentState = GAMESTATE::WELCOME;
			executeState();
			break;
		}
		break;
	case GAMESTATE::INSTRUCTIONS:
		switch (kbInput)
		{
		case 'o':
		case 'O':
			mCurrentState = GAMESTATE::OPTIONS;
			executeState();
			break;
		}
		break;
	case GAMESTATE::PAUSE:
		switch (kbInput)
		{
		case 'w':
		case 'W':
			mCurrentState = GAMESTATE::WELCOME;
			executeState();
			break;
		case 'o':
		case 'O':
			mCurrentState = GAMESTATE::ONGAME;
			executeState();
			break;
		case 'q':
		case 'Q':
			mCurrentState = GAMESTATE::QUIT;
			executeState();
			break;
		}
		break;
	case GAMESTATE::QUIT:
		switch (kbInput)
		{
		case 'w':
		case 'W':
			mCurrentState = GAMESTATE::WELCOME;
			executeState();
			break;
		case 'e':
		case 'E':
			mCurrentState = GAMESTATE::EXIT;
			executeState();
			break;
		}
		break;
	case GAMESTATE::START:
		switch (kbInput)
		{
		case 'o':
		case 'O':
			mCurrentState = GAMESTATE::ONGAME;
			executeState();
			break;
		case 'p':
		case 'P':
			mCurrentState = GAMESTATE::PAUSE;
			executeState();
			break;
		}
		break;
	case GAMESTATE::ONGAME:
		switch (kbInput)
		{
		case 'p':
		case 'P':
			mCurrentState = GAMESTATE::PAUSE;
			executeState();
			break;
		}
		break;
	case GAMESTATE::GAMEOVER:
		switch (kbInput)
		{
			executeState();
		}
		break;
	};
};

void FSM::executeState() 
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
		menu.start();
		break;
	case GAMESTATE::ONGAME:
		//std::cout << "IN ONGAME" << std::endl;
		menu.onGame();
		break;
	case GAMESTATE::GAMEOVER:
		std::cout << "IN GAMEOVER" << std::endl;
		break;
	};
};
