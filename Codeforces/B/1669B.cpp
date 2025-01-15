/*
Author: Karim Tarek Ibrahim
Problem name: Triple
Problem link: https://codeforces.com/contest/1669/problem/B
Date: 15/1/2025
*/

#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
int arr[200001];
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int freq[200001] = { 0 };
        bool flag = true;
        cin >> n;
        for (int i=0;i<n;i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }        
        for (int i = 1;i <= n;i++)
        {
            if (freq[i] >= 3)
            {
                cout << i << "\n";
                flag = false;
                break;
            }
        }
        if (flag)
            cout << -1 << "\n";
    }
    return 0;
}
