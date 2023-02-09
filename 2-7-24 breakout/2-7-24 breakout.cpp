#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;


class Brick {
public:// All of your code can see it
	// functions
	Brick(int x, int y);
	void draw(sf::RenderWindow& window);
	void killb();
	bool sid();
	int collision(int bx, int by);
private:// only class can see it
	//Variables
	int xpos;
	int ypos;
	int width;
	int height;
	bool dead;
	sf::RectangleShape brick;
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

	//Ball Variables
	// Ball Variables
	float bx = 300;
	float by = 250;
	float xvel = .01;
	float yvel = .03;
	sf::CircleShape ball(15);
	ball.setFillColor(sf::Color(200, 50, 50));
	ball.setPosition(300, 250);

	//Ball Physics
	bx += xvel;
	by += yvel;
	ball.setPosition(bx, by);

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
				cout << "rectangle moving left" << endl; //for Cai's testing, you can take this out
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) { //checks if "D" is pressed
				paddle1.move(5, 0); //move the rectangle 5 pixels Right on the x axis
				cout << "rectangle moving right" << endl; //for Cai's testing, you can take this out
			}

		}
		// render section
		renderWindow.clear();
		renderWindow.draw(paddle1);
		b1.draw(renderWindow);
		renderWindow.display();
	}

}// after main

Brick::Brick(int x, int y) {//constructer
	width = 80;
	height = 20;
	xpos = x;
	ypos = y;
	dead = false;
	brick.setSize(sf::Vector2f(width, height));
	brick.setFillColor(sf::Color::Red);
}
void Brick::draw(sf::RenderWindow& window) { 
	brick.setPosition(xpos, ypos);
	window.draw(brick);
}
int Brick::collision(int bx, int by) {

	//Ball Collision(brick)
	if (bx - 10 < brick.getPosition().x + 100 && by > brick.getPosition().y && by < brick.getPosition().y ) {
		cout << "paddle1 collision" << endl;
		//add sound effect here
		yvel *= -1;
	}
	return bx;
	return by;
}
void Brick::killb() { dead = true; }
bool Brick::sid() { return dead; }
