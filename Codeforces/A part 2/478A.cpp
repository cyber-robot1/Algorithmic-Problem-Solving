/*
Author: Karim Tarek Ibrahim
Problem name: Initial Bet
Problem link: https://codeforces.com/problemset/problem/478/A
Date: 15/2/2025
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
    int c1,c2,c3,c4,c5; cin>>c1>>c2>>c3>>c4>>c5;
    int sum=c1+c2+c3+c4+c5;
    if(c1==0&&c2==0&&c3==0&&c4==0&&c5==0)
        cout<<-1;
    else
    {
        int ans=-1;
        for(int i=0; i<=100; i++)
        {
            if(i*5==sum)
            {
                ans=i;
                break;
            }
        }
        cout<<ans;
    }
    
    return 0;
}
