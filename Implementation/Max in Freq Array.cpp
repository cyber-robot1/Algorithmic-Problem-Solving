/*
Author: Karim Tarek Ibrahim
*/
// This is a function to get the maximum element in a frequency array of a given array.


#include <bits/stdc++.h>
using namespace std;

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

int arr[105];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n);   
    cout << MaxinArray(arr, n);
    
    return 0;
}
