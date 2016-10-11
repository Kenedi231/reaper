#include <SFML/Graphics.hpp>

using namespace sf;
int main()
{
	RenderWindow window(VideoMode(1000, 650), "Reaper", Style::Close);
	RectangleShape hero(sf::Vector2f(50, 120));
	hero.setFillColor(Color::Green);
	hero.setPosition(500, 250);

	while (window.isOpen())
	{
		// Closed window
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		if (Keyboard::isKeyPressed(Keyboard::Left)) { hero.move(-1, 0); }
		if (Keyboard::isKeyPressed(Keyboard::Right)) { hero.move(1, 0); }

		window.clear(Color::White);
		window.draw(hero);
		window.display();
	}

	return 0;
}