/*
Author: Karim Tarek Ibrahim
Problem name: Kalevitch and Chess
Problem link: https://codeforces.com/problemset/problem/7/A
Date: 14/2/2025
*/

#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
char arr[8][8];
int main()
{
    fastIO();
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
            cin>>arr[i][j];
    }
    int ans=0;
    for(int i=0; i<8; i++)
    {
        bool flag=true;
        for(int j=0; j<8; j++)
        {
            if(arr[i][j]!='B')
            {
                flag=false;
                break;
            }
        }
        if(flag)
            ans++;
    }
    if(ans!=8)
    {
        for(int i=0; i<8; i++)
        {
            bool flag=true;
            for(int j=0; j<8; j++)
            {
                if(arr[j][i]!='B')
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                ans++;
        }
    }
    cout<<ans;
 
    return 0;
}
