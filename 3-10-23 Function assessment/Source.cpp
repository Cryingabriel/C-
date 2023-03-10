#include<iostream>
using namespace std;

int drinkcofee(char size);



int main() {
	char size;
	cout << "What is the size of the Cup You're getting? (L)arge, (M)edium, or (S)mall" << endl;
	cin >> size;
	cout << "You chose " << size << " which has " << drinkcofee(size) << " Caffine in it." << endl;
}



int drinkcofee(char size) {
	
	if (size == 'L') {
		cout << "Large Coffee!" << endl;
		return 180;//this represents caffine
	}
	else if (size == 'M') {
		cout << "Medium Coffee!" << endl;
		return 145;
	}
	else if (size == 'S') {
		cout << "Small Coffee!" << endl;
		return 109;
	}
	else {
		cout << "That's not an option." << endl;
		return 0;
	}
		
		
}