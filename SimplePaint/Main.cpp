#include <SFML/Graphics.hpp>
#include "Pencil.h"

using namespace std;
using namespace sf;

int width = 800;
int height = 800;


int main()
{
	sf::RenderWindow window(sf::VideoMode(width, height), "SimplePaint");
	sf::RectangleShape background(Vector2f(width, height));
	background.setFillColor(Color(51, 51, 51));
	vector<Pencil> line;
	Vector2f mousePositionFloat;
while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(background);
		mousePositionFloat = static_cast<sf::Vector2f>(sf::Mouse::getPosition(window));
		if (Mouse::isButtonPressed(Mouse::Button::Left)) {
			Pencil dot;
			dot.setColor(100, 55, 120);
			dot.setPosition(mousePositionFloat);
			dot.setSize(5);
			line.push_back(dot);
		}
		for (int i = 0; i < line.size(); i++) {
			line[i].draw(window);
		}
		
		window.display();
	}

	return 0;
}