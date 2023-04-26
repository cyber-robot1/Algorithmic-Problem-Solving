/*
Author: Karim Tarek Ibrahim
Problem name: Sereja and Coat Rack
Problem link: https://codeforces.com/problemset/problem/368/A
Date: 26/4/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int hooks[101];
int main()
{
    int n, d, m;
    int res = 0, temp = 0;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
        cin >> hooks[i];
    cin >> m;
    sort(hooks, hooks + n);
 
    if (n == m)
    {
        for (int i = 0; i < n; i++)
            res += hooks[i];
    }
    
    else if (n < m)
    {
        temp = m - n;
        temp *= d;
        for (int i = 0; i < n; i++)
            res += hooks[i];
        res -= temp;
    }
    
    else if (n > m)
    {
        for (int i = 0; i < m; i++)
            res += hooks[i];
    }
    cout << res;
 
 
    return 0;
}
