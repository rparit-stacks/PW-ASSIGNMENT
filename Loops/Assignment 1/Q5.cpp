// Display this GP - 3,12,48,.. upto ‘n’ terms.
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
    int n;
    cin >> n;
    int temp = 3;

    for (int i = 1; i <= n; i++)
    {
        cout << temp << " ";
        temp *= 4;
    }
    return 0;
}