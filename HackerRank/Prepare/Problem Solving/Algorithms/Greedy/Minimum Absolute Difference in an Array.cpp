/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem
*/

#include <bits/stdc++.h>
using namespace std;

int minimumAbsoluteDifference(int arr[], int n) {
    int res = 0, mn = 0;               // (res)=> result variable.
    bool flag = true;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        res = abs(arr[i] - arr[i + 1]);
        if (flag)
        {
            mn = res;
            flag = false;
        }
        else
        {
            if (res < mn)
                mn = res;
        }
    }
    return mn;
}

int arr[100005];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << minimumAbsoluteDifference(arr, n);
    
    return 0;
}
