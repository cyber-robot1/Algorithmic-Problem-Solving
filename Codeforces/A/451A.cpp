/*
Author: Karim Tarek Ibrahim
Problem name: Game With Sticks
Problem link:  https://codeforces.com/contest/451/problem/A
Date: 11/1/2023
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int mn = 0, mx = 0;
    cin >> n >> m;
    if (n == m)
    {
        if (n % 2 == 0)
            cout << "Malvika";
        else
            cout << "Akshat";
    }
    else
    {
        if (n < m)
        {
            mn = n;
            mx = m;
        }
        else
        {
            mn = m;
            mx = n;
        }
        if (mn % 2 == 0)
            cout << "Malvika";
        else
            cout << "Akshat";
    }
   

    return 0;
}
