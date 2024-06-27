// Q8. Print first ‘n’ fibonacci numbers.
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
    int a = 1;
    int b = 1;
    int c;
    cout << a << " ";
    cout << b << " ";

    for (int i = 0; i <= n; i++)
    {

        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}