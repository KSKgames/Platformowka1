#include <SFML/Graphics.hpp>
#include "game.h"

int main(){
	sf::RenderWindow window(sf::VideoMode(1280, 720), "Platformer?");
	GameStart();
	while(window.isOpen()){
		sf::Event event;
		while(window.pollEvent(event)){
			if(event.type == sf::Event::Closed){
				window.close();
			}
		}
		GameUpdate();
		window.clear();

		window.display();
	}
}