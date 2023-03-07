#include "Class.h"
#include "globals.h"
#include<SFML/Graphics.hpp>
#include<iostream>
using namespace std;

int main() {

	//game variables and setup
	srand(time(NULL)); //seed rand
	bool keys[] = { false, false, false, false }; //used for user input

	//SFML boilerplate stuff
	sf::RenderWindow screen(sf::VideoMode(1000, 1000), "Frogger!");

	frog player; //instantiate a frog!
	while (screen.isOpen()) { //gameloop####################################
		//input section-----------------------
		sf::Event event;
		while (screen.pollEvent(event)){//look for user input
			if (event.type == sf::Event::Closed) // check if the game window is closed
				screen.close();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
				keys[UP] = true;
			}
			else keys[UP] = false;
		}
		//physics section------------------------------------
		player.jump(keys);
		//render section-------------------------------------
		screen.clear();
		player.draw(screen);



		screen.display();
	}//end gameloop############################################################
	cout << "game over." << endl;
	return 0;
}