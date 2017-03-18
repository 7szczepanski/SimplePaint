#include "Pencil.h"



Pencil::Pencil()
{
}


Pencil::~Pencil()
{
}

void Pencil::setSize(float size_) {
	sprite.setRadius(size_);
	sprite.setOrigin(sprite.getRadius(), sprite.getRadius());
}

void Pencil::setPosition(Vector2f pos_) {
	sprite.setPosition(pos_);
}

void Pencil::setColor(int r_, int g_, int b_) {
	sprite.setFillColor(Color(r_, g_, b_));
}

void Pencil::draw(RenderWindow &target_) {
	target_.draw(sprite);
}