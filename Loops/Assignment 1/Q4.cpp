// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
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
    int temp = 4;

    for (int i = 1; i <= n; i++)
    {
        cout << temp << " ";
        temp += 3;
    }
    return 0;
}