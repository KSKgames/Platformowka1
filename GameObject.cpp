#include"GameObject.hpp"
#include"GameRender.hpp"
#include"SFML/Graphics.hpp"
#include<vector>

extern std::vector<sf::Sprite*> GameRenderList;
GameObject::GameObject(float x, float y, std::string textureFile){
	m_posX = x;
	m_posY = y;
	sprite = sf::Sprite(*LoadTexture(textureFile));
	sprite.setPosition(m_posX, m_posY);
	GameRenderList.push_back(&sprite); //automatyczne dodawanie obiektu do renderowania
}
GameObject::~GameObject(){
	//https://stackoverflow.com/questions/3385229/c-erase-vector-element-by-value-rather-than-by-position
	GameRenderList.erase(std::find(GameRenderList.begin(), GameRenderList.end(), &sprite));
}
void GameObject::setPos(float x, float y){
	sprite.setPosition(x, y);
	m_posX = x;
	m_posY = y;
}
void GameObject::setRot(float a){
	sprite.setRotation(a);
	m_rotation = a;
}
float GameObject::getPosX() const {return m_posX;}
float GameObject::getPosY() const {return m_posY;}
float GameObject::getRot() const {return m_rotation;}
