#include<SFML/Graphics.hpp>
int main()
{
	//create game window
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML!");
	//create shape
	sf::CircleShape shape(100.f);
	//Set color
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen()) //Game loop
	{
		sf::Event event; //evet queue
		while (window.pollEvent(event)) //look for events
		{
			if (event.type == sf::Event::Closed) //check if window's close button is clicked
				window.close();//kill game window
		}
		window.clear();//wipe screen
		window.draw(shape);//draw shape
		window.display();//flip screen
	}
	return 0; //tell operating system all is chill
}