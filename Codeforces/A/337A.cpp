/*
Author: Karim Tarek Ibrahim
Problem name: Puzzles
Problem link: https://codeforces.com/problemset/problem/337/A
Date: 11/3/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[51];
 
int main()
{
 
    int n, m, num_pairs = 0;
    int mn = 0, res = 0;
    bool flag = true;

    cin >> n >> m;
 
    for (int i = 0; i < m; i++)
        cin >> arr[i];
 
    sort(arr, arr + m);
    num_pairs = (m - n) + 1;
 
    for (int i = 1, k = 0; i <= num_pairs; i++, k++)
    {
        res = arr[n - 1 + k] - arr[0 + k];
 
        if (flag)
        {
            mn = res;
            flag = false;
        }
 
        else
        {
            if (res <= mn)
                mn = res;
        }
    }
    cout << mn;
 
 
    return 0;
}
