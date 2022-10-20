/*
Author: Karim Tarek Ibrahim
*/
// This is a function to get the maximum element in the frequency array of a given array.

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

int SizeFreqArray(int arr[], int n)
{
    int mx = MaxinArray(arr, n);
    int mn = MininArray(arr, n);
    int m = (mx - mn) + 1;
    return m;
}

int arr[105];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
      
    cout<<SizeFreqArray(arr, n);
    
    return 0;
}
