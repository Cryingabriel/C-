#include <iostream>
using namespace std;

//C++ array: like a list
string Gestures[] = { "Rock", "Paper", "Scissors", "Lizard", "Spock" };

int winloss[5][5] = { {2,0,1,1,0},
                      {1,2,0,0,1},
                      {0,1,2,1,0},
                      {0,1,0,2,1},
                      {1,0,1,0,2} };

void mainagain();
void print_greeting();
void print_Gestures();
int input_throw(string thrower, string opponent);
int calc_winner(int throw1, int throw2);



int main()
{
    std::cout << "Hello World!\n";
    mainagain();
}




//Function definirions go under main in C++
void mainagain() {
    print_greeting();
    string name1;
    string name2;
    cout << "Please enter Player 1's name: ";
    cin >> name1;
    cout << "Please enter Player 2's name: ";
    cin >> name2;

    int throw1 = input_throw(name1, name2);
    int throw2 = input_throw(name2, name1);

    int winner = calc_winner(throw1, throw2);

    while (winner == 2) {
        cout << "It's a tie; both players will throw again." << endl;
        throw1 = input_throw(name1, name2);
        throw2 = input_throw(name2, name1);
        winner = calc_winner(throw1, throw2);
    }
    if (winner == 1)
        cout << Gestures[throw1] << " defeats " << Gestures[throw2] << "." << endl << name1 << " defeats " << name2 << "." << endl;
    else
        cout << Gestures[throw2] << " defeats " << Gestures[throw1] << "." << endl << name2 << " defeats " << name1 << "." << endl;
}


void print_greeting() {
    cout << "Welcome to Rock-Paper-Sissors-Lizard-Spock" << endl;
}

void print_Gestures() {
    cout << "Choices are: " << endl;
    cout << "(0) Rock, (1) Paper, (2) Scissors, (3) Lizard, (4) Spock." << endl;
}

int input_throw(string thrower,string opponent) {
    cout << "It is " << thrower << "'s turn." << endl;
    print_Gestures();
    cout << "No peeking, " << opponent << "." << endl;
    int the_throw;
    cout << thrower << ", what is your throw? ";
    cin >> the_throw;

    while (the_throw < 0 || the_throw >= sizeof(Gestures)) {
        cout << endl << "Invalid choice; try again.";
        cin >> the_throw;
    }
    cout << endl << thrower << " throws " << Gestures[the_throw] << "." << endl;
    return the_throw;
}
int calc_winner(int throw1, int throw2) {
    return winloss[throw1][throw2];
}