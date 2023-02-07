#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;


class Brick {
public:// All of your code can see it
	// functions
	Brick(int x, int y);
	void draw();
	void killb();
	bool sid();
private:// only class can see it
	//Variables
	int xpos;
	int ypos;
	int width;
	int height;
	bool dead;

};


int main()
{
	//game set up (you'll need these two lines in every game)
	sf::RenderWindow renderWindow(sf::VideoMode(600, 600), "Breakout"); //set up screen
	sf::Event event; //set up event queue


	//player paddle
	sf::RectangleShape paddle1(sf::Vector2f(100.0f, 10.0f));
	paddle1.setFillColor(sf::Color::Blue); //other colors: https://www.sfml-dev.org/documentation/2.5.1/classsf_1_1Color.php
	paddle1.setPosition(250.0f, 500.0f); //set position: this is where the top left corner will be



	// instantiate objects
	Brick b1(200, 200);
	// gameloop
	while (renderWindow.isOpen()) {//keep window open until user shuts it down
		while (renderWindow.pollEvent(event)) { //look for events

			//this checks if the user has clicked the little "x" button in the top right corner
			if (event.type == sf::Event::EventType::Closed)
				renderWindow.close();

			//KEYBOARD INPUT (just one key to start
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) { //checks if "A" is pressed
				paddle1.move(-5, 0); //move the rectangle 5 pixels Left on the x axis
				cout << "rectangle moving ;eft" << endl; //for Cai's testing, you can take this out
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) { //checks if "A" is pressed
				paddle1.move(5, 0); //move the rectangle 5 pixels Right on the x axis
				cout << "rectangle moving right" << endl; //for Cai's testing, you can take this out
			}

		}
		b1.draw();
		// render section
		renderWindow.clear();
		renderWindow.draw(paddle1);
		renderWindow.draw(b1);
		renderWindow.display();
	}

}// after main

Brick::Brick(int x, int y) {//constructer
	width = 80;
	height = 20;
	xpos = x;
	ypos = y;
	dead = false;
}
void Brick::draw() {}
void Brick::killb() { dead = true; }
bool Brick::sid() { return dead; }
