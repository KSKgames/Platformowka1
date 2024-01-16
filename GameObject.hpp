#pragma once
#include<SFML/Graphics.hpp>
class GameObject{
private:
	float m_posX,m_posY,m_rotation;
public:
	void setPos(float x, float y);
	void setRot(float a);
	float getPosX() const;
	float getPosY() const;
	float getRot() const;
	sf::Sprite sprite;
	float rot;
	GameObject(float x, float y, std::string textureFile);
	~GameObject();
};