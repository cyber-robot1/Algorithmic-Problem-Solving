/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/minimum-distances/problem/
*/

#include <bits/stdc++.h>
using namespace std;

int minimumDistances(int a[], int n) {
    int mn = 0;                           // (mn)=> minimum absolute difference among pairs of equal elements.
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                if (flag)
                {
                    mn = abs(i - j);
                    flag = false;
                }
                else
                {
                    if (abs(i - j) < mn)
                        mn = abs(i - j);
                }
                break;
            }
            else
                continue;
        }
    }
    if (mn == 0)
        mn = -1;
    
    return mn;
}

int arr[1005];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << minimumDistances(arr, n);

    return 0;
}
