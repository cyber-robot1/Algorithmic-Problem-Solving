/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/picking-numbers/problem 
*/

#include <bits/stdc++.h>
using namespace std;

int pickingNumbers(int a[], int n) {
    int mx = 0, c_len = 1;                   // (c_len)=> counter variable to counts value of the maximum valid length of a multiset in a given array.
    bool flag = true;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(a[i] - a[j]) <= 1)
                c_len++;
            else
                break;
        }
        if (flag)
        {
            mx = c_len;
            flag = false;
        }
        else
        {
            if (c_len > mx)
                mx = c_len;
        }
        c_len = 1;
    }
    return mx;
}

int arr[103];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << pickingNumbers(arr, n);
    
    return 0;
}
