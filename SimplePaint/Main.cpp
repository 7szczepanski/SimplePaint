#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int width = 800;
int height = 800;


int main()
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SimplePaint");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}