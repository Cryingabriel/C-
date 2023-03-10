#include <iostream>
using namespace std;

int main() {
	for (int i = 50; i < 72; i += 2) {
		cout << i << " ";
	}
	cout << endl;
	for (int u = 100; u > 45; u -= 5) {
		cout << u << " ";
	}
	cout  << endl;
	for (int l = 2; l < 4096; l *= 2) {
		cout << l << " ";
	}
	cout << endl;
	
	int r = 0;
	for (int o = 0; o < 5; o++) {
		for (int p = 0; p < 4; p++) {
			r += 1;
			cout << r;
		}
		cout << endl;
		r = 0;
	}
		

}