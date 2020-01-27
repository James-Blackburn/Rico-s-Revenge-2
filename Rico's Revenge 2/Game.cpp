#include "Game.h"
#include "GameState.h"
#include "MenuState.h"


Game::Game() : window(sf::VideoMode(800, 600), "Rico's Revenge 2") 
{
	window.setFramerateLimit(60);
	currentState = new MenuState(this);// "this" is a pointer to the current class (Game)
}

void Game::mainLoop()
{
	while (window.isOpen())
	{
		currentState->update();
		currentState->draw();
	}
}


