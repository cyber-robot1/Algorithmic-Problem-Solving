/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/birthday-cake-candles/problem
*/

#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(int candles[], int n) {
    int mx=0, c=0;
    bool flag=true;
    for(int i=1; i<n; i++)          // getting the max element
    {
        if(flag)
        {
            mx=candles[0];
            flag=false;
        }
        if(candles[i]>mx)
        mx=candles[i];
    }
    for(int i=0; i<n; i++)            // calculating the frequency of the max element
    {
        if(candles[i]==mx)
        c++;
    }
    return c;
}

int main()
{
    int n,arr[100000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<birthdayCakeCandles(arr,n)<<endl;

    return 0;
}
