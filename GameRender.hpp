#pragma once
#include<SFML/Graphics.hpp>
void CleanGarbage();
void DrawGameObjects(sf::RenderWindow* window);
sf::Texture* LoadTexture(std::string file);