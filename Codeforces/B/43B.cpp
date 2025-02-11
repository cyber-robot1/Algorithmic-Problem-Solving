/*
Author: Karim Tarek Ibrahim
Problem name: Letter
Problem link: https://codeforces.com/problemset/problem/43/B
Date: 11/2/2025
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
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
 
    vector<char> S1, S2;
    map<char,int> mp;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]==32)
            continue;
        else
            S1.push_back(s1[i]);
    }
    for(int i=0; i<s2.size(); i++)
    {
        if(s2[i]==32)
            continue;
        else
            S2.push_back(s2[i]);
    }
 
    for(int i=0; i<S1.size(); i++)
        mp[S1[i]]++;
 
    bool flag=true;
    for(int i=0; i<S2.size(); i++)
    {
        if(mp[S2[i]]==0)
        {
            flag=false;
            break;
        }
        if(mp[S2[i]]!=0)
            mp[S2[i]]--;
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
 
    return 0;
}

