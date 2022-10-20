/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/equality-in-a-array/problem/
*/

#include <bits/stdc++.h>
using namespace std;

int MaxinArray(int arr[], int n)
{
    int mx = 0;
    mx = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= mx)
            mx = arr[i];
    }
    return mx;
}

int MininArray(int arr[], int n)
{
    int mn;
    mn = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= mn)
            mn = arr[i];
    }
    return mn;
}

int MaxinFreqArray(int arr[], int n)
{
    int freq[105] = { 0 };
    int mx = 0;
    for (int i = 0; i < n; i++)
        freq[arr[i]]++;

    int start = arr[0];
    int end = arr[n - 1];

    mx = freq[start];
    for (int i = start; i <= end; i++)
    {
        if (freq[i] > mx)
            mx = freq[i];
    }
    return mx;
}

int equalizeArray(int arr[], int n) {
    int mx=MaxinFreqArray(arr, n);        // max element in frequency array.
    int output=n-mx;
    return output;
}

int arr[105];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);   
    cout << equalizeArray(arr, n);
    
    return 0;
}
