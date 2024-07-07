// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

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
    for (int i = 1; i <= 5; i++)
    {
        char al = 'A';
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
                cout << al++ << " ";

            else
                cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}