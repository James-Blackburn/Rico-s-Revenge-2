#pragma once
#include "GameState.h"

class PlayingState : public GameState
{
public:
	void update();
	void draw();
};