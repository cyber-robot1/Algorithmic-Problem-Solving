/*
Author: Karim Tarek Ibrahim
Problem name: Valera and Plates
Problem link: https://codeforces.com/problemset/problem/369/A
Date: 11/3/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];

int main()
{

    int n, m, k, cnt = 0, total = 0;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    total = m + k;
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            if (m < 0)
            {
                cnt++;
            }

            else if (m == 0)
            {
                m--;
                cnt++;
            }

            else
            {
                m--;
                total--;
            }
        }

        else if (arr[i] == 2)
        {
            total--;
            if (total < 0)
                cnt++;
        }
    }

    cout << cnt;


    return 0;
}
