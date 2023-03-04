/*
Author: Karim Tarek Ibrahim
Problem name: Twins
Problem link: https://codeforces.com/problemset/problem/160/A
Date: 4/3/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;

int arr[101];

int main()
{
    int n, coin = 0, sum = 0, c = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        sum = sum + arr[i];

    sort(arr, arr + n);
    reverse(arr, arr + n);

    
    for (int i = 0; i < n; i++)
    {
        c = c + arr[i];
        coin++;
        sum = sum - arr[i];
        if (c > sum)
            break;
    }
    cout << coin;

    return 0;
}
