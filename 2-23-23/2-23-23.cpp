#include <iostream>
using namespace std;

int a;
int b;
int main()
{
	cout << "what is the firrst number?" << endl;
	cin >> a;
	cout << "What is the second number?" << endl;
	cin >> b;

	cout << a / b << endl;
	if (a > b) {
		cout << b << a << endl;
	}
	else {
		cout << a << b << endl;
	}

	if (a == 13) {
		cout << "a is 13" << endl;
	}
	if (b == 13) {
		cout << "b is 13" << endl;
	}

	if (a % 2 == 0) {
		cout << "a is even" << endl;
	}
	if (b % 2 == 0) {
		cout << "b is even" << endl;
	}
}