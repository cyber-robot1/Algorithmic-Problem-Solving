/*
Author: Karim Tarek Ibrahim
Problem name: Set of Strings
Problem link: https://codeforces.com/problemset/problem/544/A
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
 
int main()
{
    fastIO();
    int k; cin>>k;
    string str; cin>>str;
    set<char> s;
    for(int i=0; i<str.size(); i++)
        s.insert(str[i]);
    int noUnique=s.size();
    if(k<=noUnique)
    {
        map<char, bool>mp;
        for(auto it: s)
            mp[it]=false;
        vector<string> vec;
        string tmp="";
        for(int i=0; i<str.size(); i++)
        {
            if(mp[str[i]]== false && k)
            {
                k--;
                mp[str[i]]=true;
                if(!tmp.empty())       
                {
                    vec.push_back(tmp);
                    tmp="";
                }
                tmp+=str[i];
            }
            else
                tmp+=str[i];
        }
        vec.push_back(tmp);
        cout<<"YES"<<endl;
        for(auto it: vec)
            cout<<it<<endl;
    }
    else
        cout<<"NO";
 
    return 0;
}
