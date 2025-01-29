/*
Author: Karim Tarek Ibrahim
Problem name: Sereja and Suffixes
Problem link: https://codeforces.com/problemset/problem/368/B
Date: 29/1/2025
*/

#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
int arr[100001];
int main()
{
    fastIO();
    int n, m;
    cin>>n>>m;
    map<int, int> mp;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    vector<int> distinct(n, 0);
    for(int i=n-1; i>=0; i--)
    {
        mp[arr[i]]++;
        if(i==n-1)
            distinct[i]++;
        else
        {
            if(mp[arr[i]]==1)
            {
                distinct[i]=distinct[i+1];
                distinct[i]++;
            }
            else
                distinct[i]=distinct[i+1];
        }
    }
    while(m--)
    {
        int x; cin>>x;
        x--;
        cout<<distinct[x]<<endl;
    }
 
    return 0;
}
