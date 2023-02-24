/*
Author: Karim Tarek Ibrahim
Problem name: Sereja and Mugs
Problem link: https://codeforces.com/problemset/problem/426/A
Date: 12/2/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[101];
 
int main()
{
    int n, s, c = 0;
    bool flag = true;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    sort(arr, arr + n);
    
    for (int i = 0; i < n - 1; i++)
    {
        c = c + arr[i];
        if (c > s)
        {
            flag = false;
            break;
        }
    }
 
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}
