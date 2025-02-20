/* 
Author: Karim Tarek Ibrahim Problem 
Problem name: Fruits
Problem link: https://codeforces.com/problemset/problem/12/C 
Date: 20/2/2025
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
    int n,m; cin>>n>>m;
    deque<int> vec;
    while(n--)
    {
        int x; cin>>x;
        vec.push_back(x);
    }
    map<string,int> mp;
    while(m--)
    {
        string str; cin>>str;
        mp[str]++;
    }
    vector<int> freq;
    for(auto it: mp)
        freq.push_back(it.second);
    sort(vec.begin(), vec.end());
    sort(freq.begin(), freq.end());
    reverse(freq.begin(), freq.end());
    int mn=0;
    for(int i=0; i<freq.size(); i++)
        mn+=freq[i]*vec[i];
    reverse(vec.begin(), vec.end());
    int mx=0;
    for(int i=0; i<freq.size(); i++)
        mx+=freq[i]*vec[i];
 
    cout<<mn<<" "<<mx;
 
    return 0;
}
