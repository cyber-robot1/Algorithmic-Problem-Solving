/*
Author: Karim Tarek Ibrahim
Problem name: Spy Detected!
Problem link: https://codeforces.com/problemset/problem/1512/A
Date: 16/1/2025
*/

#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
int arr[101];
int main()
{
    fastIO();
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int freq[101]={0};
        vector<pair<int,int>>v;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;
            v.push_back(make_pair(arr[i],i));
        }
 
        int pos=1;
        bool flag=false;
        for(int i=1; i<=100; i++)
        {
            if(freq[i]==1)
            {
                for(auto it: v)
                {
                    if(i==it.first)
                    {
                        pos+=it.second;
                        flag=true;
                        break;
                    }
                }
            }
            if(flag)
                break;
        }
        cout<<pos<<endl;
    }
    return 0;
}
