#include<stack>
#include<iostream>
using namespace std;

int main() {
	stack<string> pancakes;

	string ah;
	while (ah != "0")
	{
		cout << "what type of pancake flavor?" << endl;
		cin >> ah;

		if (ah != "0")
		{
			pancakes.push(ah);
		}

		cout << endl << endl;

		cout << "its size is now: " << pancakes.size() << endl;
	}
	

}