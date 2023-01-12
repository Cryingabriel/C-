#include<SFML/Graphics.hpp>
#include <iostream>
using namespace std;

void circlef(int size, int color, int color2, int color3, int pos, int pos2) {
	sf::RenderWindow window(sf::VideoMode(800, 800), "SFML Circles");

	sf::CircleShape circle;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}
		circle.setRadius(size);
		circle.setFillColor(sf::Color(color, color2, color3));
		circle.setPosition(pos, pos2);

			window.draw(circle);
			window.display();
	}
}

int main() {
	int size;
	int color;
	int color2;
	int color3;
	int pos;
	int pos2;
	cout << "Enter the size of the circle" << endl;
	cin >> size;
	cout << "Enter the first color (0-255)" << endl;
	cin >> color;
	cout << "Enter the second color (0-255)" << endl;
	cin >> color2;
	cout << "Enter the third color (0-255)" << endl;
	cin >> color3;
	cout << "Enter x position of the circle" << endl;
	cin >> pos;
	cout << "Enter y position of the circle" << endl;
	cin >> pos2;

	circlef(size, color, color2, color3, pos, pos2);

}