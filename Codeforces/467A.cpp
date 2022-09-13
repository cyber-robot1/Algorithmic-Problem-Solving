/*
Author: Karim Tarek Ibrahim
Problem name: George and Accommodation
Problem link: https://codeforces.com/problemset/problem/467/A
Date: 13/9/2022
*/

#include <iostream>
using namespace std;

int main()
{
    int n, p, q, c = 0;
    bool flag = false;
    cin >> n;
    while (n--)
    {
        cin >> p >> q;
        if ((q - p) >= 2)
        {
            c++;
            flag = true;
        }
    }
    if (flag)
        cout << c;
    else
        cout << 0;
    
   
    return 0;
}
