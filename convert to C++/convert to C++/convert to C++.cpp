#include <iostream>
using namespace std;


int main()
{
	int t;
	cout << "number of cases" << endl;
	cin >> t;
	for (int y = 0; y < t; y++) {
		double r = 0;
		int e;
		cout << "How many teams?" << endl;
		cin >> e;
		for (int i = 0; i < e; i++) {
			double g;
			cin >> g;
			r += g;
		}
		cout << r << endl;
	}
	
}

