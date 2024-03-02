/*
Author: Karim Tarek Ibrahim
Problem name: Era
Problem link: https://codeforces.com/problemset/problem/1604/A
Date: 2/3/2024
*/

#include <bits/stdc++.h>
using namespace std;
 
void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}   
 
int main()
{
    fastIO();
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n), ans;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s.insert(v[i] - (i + 1));
        }
        auto it = s.end();
        it--;
        cout << *it << endl;
    }
    
    return 0;
}
