/*
Author: Karim Tarek Ibrahim
Problem name: Wizards and Demonstration
Problem link: https://codeforces.com/problemset/problem/168/A
Date: 11/1/2023
*/

#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    double n, x, y;
    int mn = 0, res = 0;
    cin >> n >> x >> y;
    mn = ceil((y / 100) * n);
    res = mn - x;
    
    if (mn <= x)
        cout << 0;
    
    else
        cout << res;
 
    return 0;
}
