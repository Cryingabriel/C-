#include <iostream>
using namespace std;

int main() {
	int room = 1;
	char choice;

	cout << "Welcome to the Text-Based Game." << endl;
	do {
		switch (room) {
		case 1:
			cout << "You have entered Room 1. You can go (e)ast" << endl;
			cin >> choice;
			if (choice == 'e')
				room = 2;
			else
				cout << "I don't understand." << endl;
			break;
		case 2:
			cout << "You have entered Room 2. You can go (w)est or (s)outh" << endl;
			cin >> choice;
			if (choice == 'w')
				room = 1;
			else if (choice == 's')
				room = 3;
			else
				cout << "I don't understand." << endl;
			break;
		case 3:
			cout << "You have entered Room 3. You can go (n)orth or (w)est." << endl;
			cin >> choice;
			if (choice == 'n')
				room = 2;
			else if (choice == 'w')
				room = 4;
			else
				cout << "I don't understand." << endl;
			break;
		case 4:
			cout << "You have entered Room 4. You can go (e)ast or (s)outh." << endl;
			cin >> choice;
			if (choice == 'e')
				room = 3;
			else if (choice == 's')
				room = 5;
			else
				cout << "I don't understand." << endl;
			break;
		case 5:
			cout << "You have entered Room 5. You can go (n)orth." << endl;
			cin >> choice;
			if (choice == 'n')
				room = 4;
			else
				cout << "I don't understand." << endl;
			break;
		}
	} while (choice != 'q');
}