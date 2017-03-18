#pragma once
#include<SFML\Graphics.hpp>
using namespace sf;
using namespace std;
class Pencil
{

public:
	CircleShape sprite;
	void setSize(float);
	void setColor(int,int,int);
	void setPosition(Vector2f);
	void draw(RenderWindow &);
	
	Pencil();
	~Pencil();
};

