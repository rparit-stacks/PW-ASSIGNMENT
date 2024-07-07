// Input n = 4
// Output:
// *
// * *
// * * *
// * * * *
// * * *
// * *
// *

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
    int temp = 3;
    for (int i = 1; i <= 7; i++)
    {
        if (i <= 4)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*" << " ";
            }
        }
        else
        {
            for (int k = 1; k <= temp; k++)
            {
                cout << "*" << " ";
            }
            temp--;
        }

        cout << endl;
    }
    return 0;
}