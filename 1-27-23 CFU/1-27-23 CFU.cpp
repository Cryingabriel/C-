#include <iostream>
using namespace std;




int main()
{
    int cookies;
    cout << "How many cookies do you have?" << endl;
    cin >> cookies;

    if (cookies < 5) {
        cout << "Do you want a cookie?" << endl;
    }
    else if (cookies < 10) {
        cout << "You have a good amount of cookies." << endl;
    }
    else if (cookies >= 10) {
        cout << "You have too many cookies and should give me one." << endl;
    }

    char person;
    cout << "Who do you like best (b)art simpson, (s)cooby doo, (r)ick, (d)affy duck, or (p)henious." << endl;
    cin >> person;

    if (person == 'b') {
        cout << "Eat my shorts." << endl;
    }
    else if (person == 's') {
        cout << "Scooby dooby doo." << endl;
    }
    else if (person == 'r') {
        cout << "Wubba lubba dub dub." << endl;
    }
    else if (person == 'd') {
        cout << "Sufferin' succotash!" << endl;
    }
    else if (person == 'p') {
        cout << "Ferb I know what we're going to do today." << endl;
    }

    char des;
    cout << "Do you want (i)ce cream or (c)andy?" << endl;
    cin >> des;

    if (des == 'i') {
        char ah;
        cout << "Do you want (c)hocolate or (f)ruit." << endl;
        cin >> ah;

        if (ah == 'c') {
            cout << "I would recommend a Hot Fudge Sundae." << endl;
        }
        else if (ah == 'f') {
            cout << "I would recommend a Strawberry Blizzard." << endl;
        }
    }
    else if (des == 'c') {
        char ha;
        cout << "Do you want (c)hocolate or (f)ruit." << endl;
        cin >> ha;

        if (ha == 'c') {
            cout << "I would recommend a Hershey Bar." << endl;
        }
        else if (ha == 'f') {
            cout << "I would recommend Starbursts." << endl;
        }
    }

}

