#pragma once
#include "GameState.h"

class Game
{
private:
	GameState* currentGameState;

	void changeGameState();
	GameState* getCurrentGameState();

public:
	Game(){}
	void updateState();
	void drawState();
};