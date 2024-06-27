// Q5. WAP to print the sum of all the even digits of a given number.
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
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum += i;
    }
    cout << sum;
    return 0;
}