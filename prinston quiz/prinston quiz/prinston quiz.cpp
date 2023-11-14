#include <iostream>
#include <stack>
using namespace std;

int cases;
char input;
bool leftnut = false;
bool rightnut = false;
stack <char> myStack;

int main() {
	cin >> cases;
	for (int i = 0; i < cases; i++) {
		cin >> input;
		if (input == '(' && leftnut == false) {
			myStack.push(input);
			leftnut = true;
		}
		else if (input == '[' && leftnut == false) {
			myStack.push(input);
			leftnut = true;
		}
		else if (input == '{' && leftnut == false) {
			myStack.push(input);
			leftnut = true;
		}
		if (input == ')' && rightnut == false && myStack.top() == '(') {
			myStack.pop();
			rightnut = true;
		}
		else if (input == ']' && rightnut == false && myStack.top() == '[') {
			myStack.pop();
			rightnut = true;
		}
		else if (input == '}' && rightnut == false && myStack.top() == '{') {
			myStack.pop();
			rightnut = true;
		}
	}
	cout << "\n";
	if (myStack.size() > 0) {
		cout << "The size is: " << myStack.size() << '\n';
		cout << "The top is: " << myStack.top() << '\n';
	}
	else
		cout << "The number of parantheses, braces, and curly braces are 'balanced'\n";
}