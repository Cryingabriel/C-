#include <iostream>
using namespace std;

class Planet {
private:
    int mass;
    int moons;
    int rings;
    char cat;
    bool hlife;
public:
    Planet();
    Planet(int m, int mo, int r, char c);
    void planetinfo();
    void capturemoon();
    void shredmoon();
    bool growlife();
    bool GHBA();
};




int main()
{
    
    Planet sfkukj(30, 5, 1, 'g');
    Planet seabass;
    Planet george(62, 5, 6, 'i');
    Planet yolotl;

    sfkukj.planetinfo();
    seabass.planetinfo();
    george.planetinfo();
    yolotl.planetinfo();

    sfkukj.growlife();
    seabass.shredmoon();
    george.shredmoon();
    yolotl.capturemoon();

    sfkukj.planetinfo();
    seabass.planetinfo();
    george.planetinfo();
    yolotl.planetinfo();

}

Planet::Planet() {
    mass = 5.9722e24;
    moons = 1;
    rings = 0;
    cat = 'r';
    hlife = true;
}

Planet::Planet(int m, int mo, int r, char c) {
    mass = m;
    moons = mo;
    rings = r;
    cat = c;
    hlife = false;
}

void Planet::planetinfo() {
    cout << "Hello I am a planet" << endl;

    if (hlife == true)
        cout << "I have life on me." << endl;
    else
        cout << "I don't have any life on me." << endl;



    if (cat == 'i')
        cout << "I'm a Icy planet." << endl;
    else if (cat == 'r')
        cout << "I'm a Rocky planet." << endl;
    else
        cout << "I'm a gas Giant" << endl;
}

void Planet::capturemoon() { moons += 1; }

void Planet::shredmoon() { rings += 1; }

bool Planet::growlife() {
    hlife = true;
    return hlife;
}
bool Planet::GHBA() {
    hlife = false;
    return hlife;
}