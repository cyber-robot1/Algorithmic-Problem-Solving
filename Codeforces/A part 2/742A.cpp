/*
Author: Karim Tarek Ibrahim
Problem name: Arpa’s hard exam and Mehrdad’s naive cheat
Problem link: https://codeforces.com/problemset/problem/742/A
Date: 20/3/2024
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        if (n == 0)
            cout << 1;
        else if (n % 2 == 0 && n % 4 == 0)
            cout << 6;
        else
            cout << 4;
    }
    else
    {
        int tmp = n / 4; 
        tmp = n - tmp * 4;  
        if (tmp == 3)
            cout << 2;
        else
            cout << 8;
    }
    
    return 0;
}
