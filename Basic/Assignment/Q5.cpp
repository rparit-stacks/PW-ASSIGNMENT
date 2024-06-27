// Q5. Write a program to find the circumference of a circle with radius 10 in C++.
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
    float n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "the circumference of a circle with radius" << n << " is : " << (2 * 3.14) * n;

    return 0;
}