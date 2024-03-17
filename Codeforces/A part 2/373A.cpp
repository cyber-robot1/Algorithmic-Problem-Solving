/*
Author: Karim Tarek Ibrahim
Problem name: Collecting Beats is Fun
Problem link: https://codeforces.com/problemset/problem/373/A
Date: 17/3/2024
*/

#include <bits/stdc++.h>
using namespace std;
 
char arr[4][4];
int main()
{
    int k;
    cin >> k;
    map<int, int> mp;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
            bool con = (int(arr[i][j]) >= 49 && int(arr[i][j]) <= 57);
            if (con)
            {
                int var = arr[i][j] - '0';
                mp[var]++;
            }
        }
    }
    int mxValue = 0;
    for (auto it : mp)
    {
        if (it.second >= mxValue)
            mxValue = it.second;
    }
    if (mxValue > (k * 2))
        cout << "NO";
    else
        cout << "YES";
    
    return 0;
}
