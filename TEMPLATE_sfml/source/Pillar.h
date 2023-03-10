#pragma once
#include<SFML/Graphics.hpp>

#include "Bird.h"

class Pillar : public sf::RectangleShape
{
public:
	sf::Vector2f startPosition;
	sf::RectangleShape secondPillar;
	float secondPillarOffset;
	bool scored;

	void update();
	void toRight();
	void calculateCollision(Bird &_bird);
	Pillar(float _offsetX);
};

