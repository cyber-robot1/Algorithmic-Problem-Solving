/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/migratory-birds/problem
*/

#include <bits/stdc++.h>
using namespace std;

int MaxinArray(int arr[], int n)
{
    int mx = 0;
    mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }
    return mx;
}
int MininArray(int arr[], int n)
{
    int mn;
    mn = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mn)
            mn = arr[i];
    }
    return mn;
}
int migratoryBirds(int arr[], int n) {
    
    int freq[200000]={0}, mx=0, mn=0;
    for(int i=0; i<n; i++)
    {
        freq[arr[i]]++;
    }
    int Max=MaxinArray(arr,n);
    int Min=MininArray(arr,n);
    for(int i=Min; i<=Max; i++)
    {
        if(freq[i]>mx)
        {
            mx=freq[i];
            mn=i;
        }
    }
    return mn;
}

int main()
{
    int n, a[200000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<migratoryBirds(a, n);
    
    return 0;
}
