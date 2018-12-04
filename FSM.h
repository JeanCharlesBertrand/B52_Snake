// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// File name :		FSM.h
// Creation :		2018-11-30
// Author :			Jean-Charles Bertrand
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Context :		B52_Snake
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Brief :			Final State Machine
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#ifndef FSM_H
#define FSM_H

#include "Menu.h"

class FSM
{
public:
	enum class GAMESTATE
	{
		WELCOME,
		OPTIONS,
		INSTRUCTIONS,
		QUIT,
		PAUSE,
		EXIT,
		START,
		ONGAME,
		GAMEOVER,
	};

	FSM();
	~FSM();
	GAMESTATE getCurrentState();
	void setCurrentState(char input, Player &player);
	void executeState(Player &player);

private:
	GAMESTATE mCurrentState;
	Menu menu;
};

#endif // FSM_H

