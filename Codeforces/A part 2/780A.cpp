/*
Author: Karim Tarek Ibrahim
Problem name: Andryusha and Socks
Problem link: https://codeforces.com/problemset/problem/780/A
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
    int n; cin >> n;
    vector<int> v(2 * n), ans;
    set<int> s;
    for (int i = 0; i < n * 2; i++)
    {
        cin >> v[i];
        while (true)
        {
            if (s.find(v[i]) == s.end())
                s.insert(v[i]);
            else
            {
                ans.push_back(s.size());
                s.erase(v[i]);
            }
            break;
        }
    }
    cout << *max_element(ans.begin(), ans.end());
    
    return 0;
}
