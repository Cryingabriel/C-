#include <iostream>
using namespace std;

int monstergen(char biome);

int main()
{
    int life = 100;
    string input; // doesn't do anything, just to pause loop
    while (life >= 0) {
       char biome;
       cout << "What is the Biome you are currently in? (o)cean, (n)ether, (d)esert, (s)wamp, (w)inter area, (p)lains, (e)nd." << endl;
       cin >> biome;
        life -= monstergen(biome);
        cout << "You currently have " << life << "HP left." << endl;
        cout << "Press any key for next turn." << endl;
        cin >> input;
    }
    cout << "You have Died. Game over." << endl;
}

int monstergen(char biome) {
    int num = rand() % 100;
    if (biome == 'p') {
        if (num < 30) {
            cout << "A Zombie appears!" << endl;
            return 10; //this represents the damage
        }
        else if (num < 50) {
            cout << "A Skeleton attacks!" << endl;
            return 15;
        }
        else if (num < 60) {
            cout << "A Spider attacks!" << endl;
            return 20;
        }
        else if (num < 65) {
            cout << "A Creeper attacks!" << endl;
            return 34;
        }
        else {
            cout << "No monsters, you're safe this turn!" << endl;
            return 0;
        }
    }
    if (biome == 'd') {
        if (num < 30) {
            cout << "A Husk appears!" << endl;
            return 10; //this represents the damage
        }
        else if (num < 50) {
            cout << "A Skeleton attacks!" << endl;
            return 15;
        }
        else if (num < 60) {
            cout << "A Spider attacks!" << endl;
            return 20;
        }
        else if (num < 65) {
            cout << "A Creeper attacks!" << endl;
            return 34;
        }
        else if (num < 95) {
            cout << "A Zombie attacks!" << endl;
            return 10;
        }
        else {
            cout << "No monsters, you're safe this turn!" << endl;
            return 0;
        }
    }
    if (biome == 'o') {
        if (num < 30) {
            cout << "A Drowned appears!" << endl;
            return 10; //this represents the damage
        }
        else if (num < 50) {
            cout << "A Skeleton attacks!" << endl;
            return 15;
        }
        else if (num < 60) {
            cout << "A Guardian attacks!" << endl;
            return 20;
        }
        else if (num < 65) {
            cout << "A Elder Guardian attacks!" << endl;
            return 36;
        }
        else {
            cout << "No monsters, you're safe this turn!" << endl;
            return 0;
        }
    }
    if (biome == 'n') {
        if (num < 30) {
            cout << "A Magma Cube appears!" << endl;
            return 15; //this represents the damage
        }
        else if (num < 50) {
            cout << "A Skeleton attacks!" << endl;
            return 15;
        }
        else if (num < 60) {
            cout << "A Piglin attacks!" << endl;
            return 10;
        }
        else if (num < 65) {
            cout << "A Zombified Piglin attacks!" << endl;
            return 10;
        }
        else if (num < 75) {
            cout << "A Hoglin attacks!" << endl;
            return 20;
        }
        else if (num < 85) {
            cout << "A Ghast attacks!" << endl;
            return 30;
        }
        else if (num < 88) {
            cout << "A Wither Skeleton attacks!" << endl;
            return 30;
        }
        else if (num < 90) {
            cout << "A Wither Skeleton attacks!" << endl;
            return 30;
        }
        else {
            cout << "No monsters, you're safe this turn!" << endl;
            return 0;
        }
    }
    if (biome == 's') {
        if (num < 30) {
            cout << "A Slime appears!" << endl;
            return 15; //this represents the damage
        }
        else if (num < 50) {
            cout << "A Witch attacks!" << endl;
            return 25;
        }
        else if (num < 60) {
            cout << "A Zombie attacks!" << endl;
            return 10;
        }
        else if (num < 65) {
            cout << "A Creeper Piglin attacks!" << endl;
            return 34;
        }
        else if (num < 90) {
            cout << "A Spider attacks!" << endl;
            return 20;
        }
        else if (num < 95) {
            cout << "A Endermen attacks!" << endl;
            return 30;
        }
        else {
            cout << "No monsters, you're safe this turn!" << endl;
            return 0;
        }
    }
    if (biome == 'w') {
        if (num < 30) {
            cout << "A Zombie appears!" << endl;
            return 10; //this represents the damage
        }
        else if (num < 50) {
            cout << "A Skeleton attacks!" << endl;
            return 15;
        }
        else if (num < 60) {
            cout << "A Stray attacks!" << endl;
            return 15;
        }
        else if (num < 65) {
            cout << "A Spider Jockey attacks!" << endl;
            return 27;
        }
        else if (num < 85) {
            cout << "A Witch attacks!" << endl;
            return 25;
        }
        else if (num < 95) {
            cout << "A Endermen attacks!" << endl;
            return 30;
        }
        else {
            cout << "No monsters, you're safe this turn!" << endl;
            return 0;
        }
    }
    if (biome == 'e') {
        if (num < 30) {
            cout << "A Endermen appears!" << endl;
            return 30; //this represents the damage
        }
        else if (num < 50) {
            cout << "A Endermight attacks!" << endl;
            return 25;
        }
        else if (num < 60) {
            cout << "A Shulker attacks!" << endl;
            return 20;
        }
        else if (num < 65) {
            cout << "A Ender Dragon Jockey attacks!" << endl;
            return 60;
        }
        else {
            cout << "No monsters, you're safe this turn!" << endl;
            return 0;
        }
    }
}