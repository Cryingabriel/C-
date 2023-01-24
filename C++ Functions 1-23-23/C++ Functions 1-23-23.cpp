// C++ Functions 1-23-23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void game() {
    char input;
    
    cout << "Do you like to play Platformers? (y/n)" << endl;
    cin >> input;
    if (input == 'y') {
        int input1;

        cout << "On a scale of 1-10, how diffucult of a game would you like to play?" << endl;
        cin >> input1;
        if (input1 > 5) {
            cout << "You should play Mario Bros." << endl;
        }
        else if (input1 <= 5) {
            cout << "You should play Kirby's Epic Yarn." << endl;
        }
    }
    else if (input == 'n') {
        int input1;
        cout << "On a sclae of 1-10, how diffucult of a game would you like to play?" << endl;
        
        cin >> input1;
        if (input1 > 5) {
          cout << " You should play Dark Souls." << endl;
        }
        else if (input1 <= 5) {
            cout << "You should play Minecraft" << endl;
        }
    }
 }


int main()
{
    while (1)
        game();

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
