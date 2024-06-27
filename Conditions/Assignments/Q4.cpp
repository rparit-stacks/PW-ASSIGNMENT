// Q4. WAP for finding the volume of the cylinder by taking radius and height as input.

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
    float r, h;
    cout << "Please Enter The radius and height followed by space : ";
    cin >> r >> h;

    cout << "the volume of the cylinder of " << r << " and " << h << " as input : " << (3.15) * r * r * h;
    return 0;
}