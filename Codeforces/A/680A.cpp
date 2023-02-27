/*
Author: Karim Tarek Ibrahim
Problem name: Bear and Five Cards
Problem link: https://codeforces.com/problemset/problem/680/A
Date: 27/2/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[5], freq[500], mxSum_freq[1000];
 
int main()
{
    int mn = 0, mx = 0;
    int sum = 0, sum_freq = 0;
 
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    
    sort(arr, arr + 5);
 
    for (int i = 0; i < 5; i++)
        sum = sum + arr[i];
 
    mn = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] <= mn)
            mn = arr[i];
    }
 
    mx = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] >= mx)
            mx = arr[i];
    }
 
    for (int i = 0; i < 5; i++)
        freq[arr[i]]++;
    
 
    for (int i = mn; i <= mx; i++)
    {
        if (freq[i] == 2)
            mxSum_freq[i] = i * 2;
 
        else if (freq[i] == 3)
            mxSum_freq[i] = i * 3;
 
        else if (freq[i] > 3)
            mxSum_freq[i] = i * 3;
 
        else if (freq[i] < 2)
            mxSum_freq[i] = 0;
    }
    
    sum_freq = mxSum_freq[mn];
    for (int i = mn + 1; i <= mx; i++)
    {
        if (mxSum_freq[i] >= sum_freq)
            sum_freq = mxSum_freq[i];
    }
    
    cout << sum - sum_freq;
 
 
    return 0;
}
