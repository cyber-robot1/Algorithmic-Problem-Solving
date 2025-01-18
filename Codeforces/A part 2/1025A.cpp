/*
Author: Karim Tarek Ibrahim
Problem name: Doggo Recoloring
Problem link: https://codeforces.com/problemset/problem/1025/A
Date: 18/1/2025
*/

#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
char arr[100001];
int main()
{
    fastIO();
    int n; cin>>n;
    map<char, int> mp;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    bool flag=false;
    for(auto it: mp)
    {
        if(it.second > 1)
        {
            flag=true;
            break;
        }
    }
    if(flag || mp.size()==1)
        cout<<"YES";
    else
        cout<<"NO";
 
    return 0;
}
