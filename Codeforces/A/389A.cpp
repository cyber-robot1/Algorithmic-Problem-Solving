/*
Author: Karim Tarek Ibrahim
Problem name: Fox and Number Game
Problem link: https://codeforces.com/problemset/problem/389/A
Date: 26/4/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
// Function to check if all elements on array are equal
bool EqualArr(int n, int arr[])
{
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            break;
        else
        {
            if (arr[i] == arr[i + 1])
                flag = true;
            else
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}
 
int arr[101];
int main()
{
    
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    sort(arr, arr + n);
 
    while (!(EqualArr(n, arr)))
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == 0)
                break;
            else
            {
                if (arr[i] != arr[i - 1])
                    arr[i] = arr[i] - arr[i - 1];
            }
        }
        sort(arr, arr + n);
    }
 
    for (int i = 0; i < n; i++)
        sum += arr[i];
 
    cout << sum;
 
    return 0;
}
