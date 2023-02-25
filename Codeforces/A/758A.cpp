/*
Author: Karim Tarek Ibrahim
Problem name: Holiday Of Equality
Problem link: https://codeforces.com/problemset/problem/758/A
Date: 9/2/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;

int arr[101];

int main()
{
    int n, c = 0, temp = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (int i = 0; i <= n - 2; i++)
    {
        temp = arr[n - 1] - arr[i];
        c = c + temp;
    }
    cout << c;
    
    
    return 0;
}
