#pragma once
#include <SFML/Graphics.hpp>
#include "GameState.h"

class Game
{
private:
	GameState* currentState;

	void changeGameState();
	GameState* getCurrentGameState();

public:
	sf::RenderWindow window;

	Game();
	void mainLoop();
};