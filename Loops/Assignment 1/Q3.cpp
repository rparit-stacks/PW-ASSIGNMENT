// Q3. Print the table of ‘n’. Here ‘n’ is an integer which the user will input.

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

    for (int i = 1; i <= 10; i++)
    {
        cout << n * i << " ";
    }
    return 0;
}