/*
Author: Karim Tarek Ibrahim
Problem name: Lineland Mail
Problem link: https://codeforces.com/problemset/problem/567/A
Date: 17/4/2023
*/

#include <iostream>
#include <cmath>
using namespace std;
 
int arr[100001];
int main()
{
    int n;
    int mn = 0, mx = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    for (int i = 0; i < n; i++)
    {
        if (i == 0)                                      // first element
        {
            mn = abs(arr[i] - arr[i + 1]);
            mx = abs(arr[i] - arr[n - 1]);
            cout << mn << " " << mx << endl;
        }
        else if (i == n - 1)                          // last element
        {
            mn = abs(arr[n - 1] - arr[n - 2]);
            mx = abs(arr[n - 1] - arr[0]);
            cout << mn << " " << mx << endl;
        }
        else                                        // middle element
        {
            mn = min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1]));
            mx = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1]));
            cout << mn << " " << mx << endl;
        }
        mn = 0;
        mx = 0;
    }
 
    return 0;
}
