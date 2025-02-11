/*
Author: Karim Tarek Ibrahim
Problem name: Phone numbers
Problem link: https://codeforces.com/problemset/problem/25/B
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
    int n; cin>>n;
    int sz=n;
    deque<char> dq;
    while(n--)
    {
        char x; cin>>x;
        dq.push_back(x);
    }
    bool flag=false;
    if(sz%2==0)
    {
        int cnt=0;
        for(int i=0; i<sz; i++)
        {
            if(cnt==2)
            {
                cnt=0;
                cout<<"-";
            }
            cout<<dq[i];
            cnt++;
        }
    }
    else if(sz%2==3)
    {
        int cnt=0;
        for(int i=0; i<sz; i++)
        {
            if(cnt==3)
            {
                cnt=0;
                cout<<"-";
            }
            cout<<dq[i];
            cnt++;
        }
    }
    else
    {
        int tmp=sz;
        int cnt=0;
        for(int i=0; i<sz; i++)
        {
            if(tmp==3)
            {
                flag=true;
                break;
            }
            else
            {
                cout<<dq[i];
                cnt++;
                tmp--;
                if(cnt==2)
                {
                    cnt=0;
                    cout<<"-";
                }
            }
        }
    }
    if(flag)
    {
        for(int i=sz-3; i<sz; i++)
            cout<<dq[i];
    }
 
    return 0;
}
