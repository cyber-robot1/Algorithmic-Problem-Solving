/*
Author: Karim Tarek Ibrahim
Problem name: Ohana Cleans Up
Problem link: https://codeforces.com/problemset/problem/554/B
Date: 19/1/2025
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
    int n; cin>>n;
    map<string, int> mp;
    while(n--)
    {
        string str; cin>>str;
        mp[str]++;
    }
    vector<int>freq;
    for(auto it:mp)
        freq.push_back(it.second);
    cout<<*max_element(freq.begin(), freq.end());
 
    return 0;
}
