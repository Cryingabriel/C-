// tuesday 1-10-22 nested loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    for (int j = 0; j < 8; j++) {
        for (int i = 0; i < 3; i++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    int l = 0;
    for (int r = 0; r < 8; r++) {
        for (int t = 0; t < 10; t++) {
            cout << l;
        }
        cout << endl;
        l += 1;
    }
    cout << endl;
    int y = 0;
    for (int r = 0; r < 8; r++) {
        for (int t = 0; t < 10; t++) {
            cout << y;
            y += 1;
        }
        cout << endl;
        y = 0;
    }
    cout << endl;
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
