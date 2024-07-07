// Input: n = 4
// Output:
// 1 2 3 4
// 1 2 3
// 1 2
// 1
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
    int in = 4;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= in; j++)
        {
            cout << j << " ";
        }
        in--;
        cout << endl;
    }

    return 0;
}