#include <SFML/Graphics.hpp>
#include "MenuState.h"
#include "Game.h"  

MenuState::MenuState(Game* parent)
{
	// An object is an instantiation of a class
	// The "parent" is the object that has created this object
	// This allows us to access functions and variables stored in the parent class
	game = parent;
	
	if(!font.loadFromFile("ArialCE.ttf"))
	{
		//handle error
	}

	buttons[0].setString("Play");
	buttons[0].setFont(font);
	buttons[0].setFillColor(sf::Color::White);
	buttons[0].setPosition(sf::Vector2f(game->window.getSize().x / 2.0f, game->window.getSize().y / 2.0f));
	
	buttons[1].setString("Quit");
	buttons[1].setFont(font);
	buttons[1].setFillColor(sf::Color::White);
	buttons[1].setPosition(sf::Vector2f(game->window.getSize().x / 2.0f, game->window.getSize().y/2 + 50.0f));
	
}

void MenuState::update()
{
	sf::Event event;
	while(game->window.pollEvent(event))
	{		if (event.type == sf::Event::Closed)game->window.close();
	}
	
	if(sf::Mouse::isButtonPressed(sf::Mouse::Left)) // Check what button the user has pressed on the menu
	{
		for(int i=0;i<max_num_buttons;i++)
		{
			if (buttons[i].getGlobalBounds().contains(game->window.mapPixelToCoords(sf::Mouse::getPosition(game->window))))
				buttons[i].setFillColor(sf::Color::Red);
				if(sf::Mouse::isButtonPressed(sf::Mouse::Left)&&i==1)
					game->window.close();
			
		}
	}
}

void MenuState::draw()
{
	game->window.clear(sf::Color::Blue);
	

	for (int i = 0; i < max_num_buttons; i++)
	{
		game->window.draw(buttons[i]);
	}
	
	
	game->window.display();
}

