/*
Author: Karim Tarek Ibrahim
Problem name: Nezzar and Colorful Balls
Problem link: https://codeforces.com/problemset/problem/1478/A
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
 
int arr[101];
int main()
{
    fastIO();
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int freq[101]={0};
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;
        }
        vector<int> v;
        for(int i=1; i<=100; i++)
        {
            if(freq[i]==0)
                continue;
            v.push_back(freq[i]);
        }
        cout<<*max_element(v.begin(),v.end())<<endl;
    }
 
    return 0;
}
