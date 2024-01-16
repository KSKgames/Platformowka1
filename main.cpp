#include <SFML/Graphics.hpp>
#include "GameRender.hpp"
#include "Game.hpp"

int main(){
	sf::RenderWindow window(sf::VideoMode(1280, 720), "Platformer?");
	window.setFramerateLimit(60);
	GameStart();
	while(window.isOpen()){
		sf::Event event;
		while(window.pollEvent(event)){
			if(event.type == sf::Event::Closed)
				window.close();
		}
		GameUpdate();
		window.clear();
		DrawGameObjects(&window);
		window.display();
	}
	CleanGarbage();
}