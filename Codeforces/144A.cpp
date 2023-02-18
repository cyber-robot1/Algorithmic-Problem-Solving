/*
Author: Karim Tarek Ibrahim
Problem name: Arrival of the General
Problem link: https://codeforces.com/problemset/problem/144/A
Date: 18/2/2023
*/

#include <iostream>
using namespace std;
 
int MaxinArray(int size, int arr[])
{
    int mx = 0;
    bool flag = true;
    for (int i = 0; i < size; i++)
    {
        if (flag)
        {
            mx = arr[0];
            flag = false;
        }
        else
        {
            if (arr[i] >= mx)
                mx = arr[i];
        }
    }
    return mx;
}
 
int MininArray(int size, int arr[])
{
    int mn = 0;
    bool flag = true;
    for (int i = 0; i < size; i++)
    {
        if (flag)
        {
            mn = arr[0];
            flag = false;
        }
        else
        {
            if (arr[i] <= mn)
                mn = arr[i];
        }
    }
    return mn;
}
 
int arr[101];
 
int main()
{
    int n;
    int mx = 0, c_mx = 0, mn = 0, c_mn = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    mx = MaxinArray(n, arr);
    mn = MininArray(n, arr);
    
    // Calculating No. of movements required to get the soldier with the maximum height in the first 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mx)
        {
            if (i == 0)
                break;
            else
            {
                while (arr[0] != mx)
                {
                    swap(arr[i], arr[i - 1]);
                    c_mx++;
                    i--;
                }
            }
        }
    }
    
    // Calculating No. of movements required to get the soldier with the minimum height in the last 
    for (int i = n-1; i >= 0; i--)
    {
        if (arr[i] == mn)
        {
            if (i == n - 1)
                break;
            else
            {
                while (arr[n - 1] != mn)
                {
                    swap(arr[i], arr[i + 1]);
                    c_mn++;
                    i++;
                }
            }
        }
    }
    
    cout << c_mn + c_mx;
 
    return 0;
}
