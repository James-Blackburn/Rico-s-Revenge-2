#pragma once
#include "GameState.h"
#include<vector>

#define max_num_buttons 2

class Game;

class MenuState : public GameState
{
public:
	Game* game;
	
	MenuState(Game* parent);
	void draw();
	void update();

private:
	sf::Text buttons[max_num_buttons];
	sf::Font font;

};