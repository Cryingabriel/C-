#include <stdio.h>
using namespace std;


int main() {
	int a;
	int b;
	printf("what is the firrst number? \n");
	scanf_s("%d", &a);
	printf("What is the second number? \n");
	scanf_s("%d", &b);

	float div = a / b;
	printf(" %d / %d is %f", a, b, div);

	if (a > b) {
		printf("%d", b);
		printf("%d \n", a);
	}
	else {
		printf("%d", a);
		printf("%d \n", b);
	}

	if (a == 13) {
		printf("a is 13 \n");
	}
	if (b == 13) {
		printf("b is 13 \n");
	}

	if (a % 2 == 0) {
		printf("a is even \n");
	}
	if (b % 2 == 0) {
		printf("b is even \n");
	}
}