// Q6. Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while
// loop.

#include <iostream>
using namespace std;

int main()
{
    for (char i = 0; i < 128; i++)
    {
        int j = (int)i; // typecasting
        cout << i << " = " << j << endl;
    }

    return 0;
}