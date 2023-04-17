/*
Author: Karim Tarek Ibrahim
Problem name: GukiZ and Contest
Problem link: https://codeforces.com/problemset/problem/551/A
Date: 17/4/2023
*/

#include <iostream>
using namespace std;
 
int arr[2001], res[2001];
int main()
{
    int n, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            else
            {
                if (arr[j] > arr[i])
                    c++;
            }
        }
        res[i] = c + 1;
        c = 0;
    }
 
    for (int i = 0; i < n; i++)
        cout << res[i] << " ";
 
 
    return 0;
}

