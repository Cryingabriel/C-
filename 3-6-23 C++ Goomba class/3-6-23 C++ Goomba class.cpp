#include <iostream>
using namespace std;

class Goomba {
private:
    int xpos;
    int ypos;
    bool isa;
    char color;
public:
    Goomba(); //default contructor
    Goomba(int x, int y, char c); // parameterized contructor
    void walk();
    void printinfo();
    void kill();
    void setpos(int x, int y);
    bool checkd();
};

int main()
{
    Goomba Lary(300, 300, 'l');//uses parameterized constructer
    Goomba Bob;//uses regular constructer, gets default values
    Lary.printinfo();
    Lary.walk();
    Lary.printinfo();
    Lary.kill();
    Lary.checkd();
    Lary.setpos(200,300);
    Lary.printinfo();
    Bob.printinfo();
    Bob.walk();
    Bob.printinfo();
    Bob.kill();
    Bob.checkd();
    Bob.setpos(100,500);
    Bob.printinfo();



}


Goomba::Goomba() {
    xpos = 0;
    ypos = 0;
    isa = false;
    color = 'b';
}

Goomba::Goomba(int x, int y, char c) {
    xpos = x;
    ypos = y;
    isa = true;
    color = c;
}

void Goomba::walk() { xpos += 1; }

void Goomba::printinfo() {
    cout << "Hi, I'm a Goomba and my position is " << xpos << "," << ypos << endl;
    //cout << "I'm currently" << color << endl;
    if (isa == true)
        cout << "I am currently alive." << endl;
    else
        cout << "I am currently dead." << endl;
    if (color == 'b')
        cout << "I am brown." << endl;
    else
        cout << "I am blue." << endl;
}

void Goomba::kill() { isa = false; }

void Goomba::setpos(int x, int y) {
    xpos = x;
    ypos = y;
    isa = true;
}

bool Goomba::checkd() {
    return isa;
}