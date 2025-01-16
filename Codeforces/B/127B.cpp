/*
Author: Karim Tarek Ibrahim
Problem name: Canvas Frames
Problem link: https://codeforces.com/problemset/problem/127/B
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

int arr[101], freq[101];
int main()
{
    fastIO();
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    int two=0, frames=0;
    for(int i=0; i<=100; i++)
    {
        if(freq[i]==0)
            continue;
        two=freq[i]/2;
        two*=2;
        frames+=two;
    }
    cout<<frames/4;

    return 0;
}
