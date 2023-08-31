#include <iostream>
#include<Windows.h>
using namespace std;

int main()
{
    for (int l = 0; l < 100000; l++) {
        int num = rand() % 20;
        for (int j = 0; j < num; j++)
            cout << " ";
        cout << char(003);
        Sleep(1);
    }
}