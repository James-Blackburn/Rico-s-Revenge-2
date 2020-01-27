#pragma once
#include <SFML/Graphics.hpp>

class Game;

class GameState
{
public:
	virtual void update(){}
	virtual void draw(){}
	virtual void setParent(Game* parent){}
};
