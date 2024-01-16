#include<SFML/Graphics.hpp>
#include<vector>
#include<iostream>
#include<algorithm>
#include<unordered_map>

std::unordered_map<std::string, sf::Texture> GameTextureList{};
std::vector<sf::Sprite*> GameRenderList{};
sf::Texture* LoadTexture(std::string file){
	if(GameTextureList.find(file)==GameTextureList.end()){
		sf::Texture texture;
		if(!texture.loadFromFile(file))
			std::cout << "B£¥D: Nie wczytano textury z pliku: " << file << " !!!";
		GameTextureList[file] = texture;
	}
	return &GameTextureList[file];
}
void DrawGameObjects(sf::RenderWindow* window){
	for(sf::Sprite*& sprite : GameRenderList){
		window->draw(*sprite);
	}
}
void CleanGarbage(){
	GameTextureList.clear();
}
