/*
Author: Karim Tarek Ibrahim
Problem name: Correct Solution?
Problem link: https://codeforces.com/problemset/problem/12/B
Date: 13/2/2025
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
    string n,m; cin>>n>>m;
    vector<int> N,M;
    bool flag=true;
    if(n.size()!=m.size())
        flag=false;
    else
    {
        for(int i=0; i<n.size(); i++)
        {
            int x=n[i]-'0';
            N.push_back(x);
        }
        for(int i=0; i<m.size(); i++)
        {
            int x=m[i]-'0';
            M.push_back(x);
        }
        sort(N.begin(), N.end());
        if(N[0]==0)
        {
            for(int i=1; i<N.size(); i++)
            {
                if(N[i]==0)
                    continue;
                else
                {
                    swap(N[i],N[0]);
                    break;
                }
            }
        }
        for(int i=0; i<N.size(); i++)
        {
            if(N[i]!=M[i])
            {
                flag=false;
                break;
            }
        }
    }
    if(flag)
        cout<<"OK";
    else
        cout<<"WRONG_ANSWER";
 
    return 0;
}
