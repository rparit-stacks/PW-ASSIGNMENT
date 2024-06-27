// Q2. Print all numbers from 1 to 100 that are divisible by 3.

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

    for (int i = 1; i <= 100; i = i++)
    {
        if (i % 3 == 0)
            cout << i << " ";
    }
    return 0;
}