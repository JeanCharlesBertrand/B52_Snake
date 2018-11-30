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
	void setCurrentState(char input);
	void executeState();

private:
	GAMESTATE mCurrentState;
};

#endif // FSM_H

