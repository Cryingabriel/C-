// Black Holes 1-24-23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void dump(){
    // use double for decimals
    double m; // mass
    double g = 6.674e-11; // Newtonian gravitational constant
    double c = 2.998e8; // speed of light
    double r = 0; // event horizon radius

    cout << "What is the mass of the Black hole?" << endl;
    cin >> m;
    //Schwarzschild Radius equation in code
    r = 2 * (g * m) / (c * c);//follows PEMDAS
    cout << r << endl;
    }

int main()
{
    while (1)
        dump();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
