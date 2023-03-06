/*
Author: Karim Tarek Ibrahim
Problem name: Dragons
Problem link: https://codeforces.com/problemset/problem/230/A
Date: 7/3/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int x[1001], y[1001];
int z[1001], o[1001];
 
int main()
{
    
    int s, n;
    bool flag = true;
    cin >> s >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i] >> y[i];
 
    for (int i = 1; i <= n; i++)
        z[i] = x[i];
 
    sort(z, z + n + 1);
    
    int i = 1;
    for (i; i <= n;)
    {
        for (int j = 1; j <= n; j++)
        {
            if (z[i] == x[j])
            {
                o[i] = y[j];
                x[j] = -1;
                y[j] = -1;
                i++;
            }
        }
    }
 
    for (int k = 1; k <= n; k++)
    {
        if (k == n)
        {
            if (s > z[k])
                flag = true;
            else
                flag = false;
        }
        else
        {
            if (s > z[k])
                s = s + o[k];
            else
            {
                flag = false;
                break;
            }
        }
    }
    
    if (flag)
        cout << "YES";
    else
        cout << "NO";
 
 
    return 0;
}
