#ifndef FSM_H
#define FSM_H

class FSM
{
private:
	enum GAMESTATE
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

	GAMESTATE mCurrentState;

public:
	FSM();
	~FSM();
	GAMESTATE currentState();
	void setCurrentState(GAMESTATE inputState);
};

#endif // FSM_H

