/*
Author: Karim Tarek Ibrahim
Problem name: Little Elephant and Rozdil
Problem link: https://codeforces.com/problemset/problem/205/A
Date: 4/3/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
// function returns index of the minimum value in a given array
int MinIndexinArray(int arr[], int n)
{
    int mn_val, mn_index;
    mn_val = arr[1];
    mn_index = 1;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] <= mn_val)
        {
            mn_val = arr[i];
            mn_index = i;
        }
    }
    return mn_index;
}
 
int arr[100001];
 
int main()
{
    int n, mn_val = 0, mn_index = 0, freq = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
 
    mn_index = MinIndexinArray(arr, n);
    
    sort(arr, arr + n + 1);
    mn_val = arr[1];
    
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == mn_val)
            freq++;
    }
    
    if (freq == 1)
        cout << mn_index;
    else
        cout << "Still Rozdil";
 
 
    return 0;
}
