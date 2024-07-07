// Input: n = 4
// Output:
// A
// A B
// A B C
// A B C D

#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        char al = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << al++ << " ";
        }
        cout << endl;
    }
    return 0;
}