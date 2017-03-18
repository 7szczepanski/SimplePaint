#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

int width = 800;
int height = 800;


int main()
{
	sf::RenderWindow window(sf::VideoMode(width, height), "SimplePaint");
	sf::RectangeShape background(Vector2f(width, height));
	background.setColor(Color(51, 51, 51));

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
		window.display();
	}

	return 0;
}