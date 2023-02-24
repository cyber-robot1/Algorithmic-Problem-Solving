/*
Author: Karim Tarek Ibrahim
Problem name: Insomnia cure
Problem link: https://codeforces.com/problemset/problem/148/A
Date: 15/9/2022
*/

#include <iostream>
using namespace std;
 
int a[100005];
 
int main()
{
    //(escD)=> No. of unharmed escaped dragons.
    int k, l, m, n, d, escD = 0;
    cin >> k >> l >> m >> n >> d;
 
    for (int i = 1; i <= d; i++)         // Assign values in array from 1 to d.
        a[i] = i;
    
    for (int i = 1; i <= d; i++)
    {
        if (a[i] % k == 0)
            a[i] = 0;
        else if (a[i] % l == 0)
            a[i] = 0;
        else if (a[i] % m == 0)
            a[i] = 0;
        else if (a[i] % n == 0)
            a[i] = 0;
    }
 
    for (int i = 1; i <= d; i++)
    {
        if (a[i] != 0)
            escD++;
    }
    cout << d - escD;
 
    return 0;
}
