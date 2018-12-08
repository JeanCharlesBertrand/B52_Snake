// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// File name :		FSM.h
// Creation :		2018-11-30
// Author :			Jean-Charles Bertrand
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Context :		B52_Snake
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Brief :			Finite-State Machine
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

	// Retourne le state pr�sent
	GAMESTATE getCurrentState();

	// Change le state du FSM selon la touche appuy�e et selon le state pr�sent
	void setCurrentState(char input, Player &player);

	// Ex�cute les commandes reli�es au state pr�sent
	void executeState(Player &player);

private:
	GAMESTATE mCurrentState;
	Menu menu;
};

#endif // FSM_H

