/*
Author: Karim Tarek Ibrahim
Problem name: Free Ice Cream
Problem link: https://codeforces.com/problemset/problem/686/A
Date: 16/1/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
    //(c)=> No. of children who're in distress.
    int n, c = 0;
    long long x, d;
    char ch;
    cin >> n >> x;
    while (n--)
    {
        cin >> ch >> d;
        if (ch == '+')
            x = x + d;
        else
        {
            if (d <= x)
                x = x - d;
            else
                c++;
        }
    }
    cout << x << " " << c;
    
 
    return 0;
}
