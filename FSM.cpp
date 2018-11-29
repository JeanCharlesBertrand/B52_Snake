#include "FSM.h"

FSM::FSM()
	:mCurrentState{ STATE_WELCOME }
{
}

FSM::~FSM()
{
}

FSM::GAMESTATE FSM::currentState()
{
	return mCurrentState;
};


void FSM::setCurrentState(GAMESTATE inputState)
{
	mCurrentState = inputState;
};
