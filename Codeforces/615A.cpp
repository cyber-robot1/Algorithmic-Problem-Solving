/*
Author: Karim Tarek Ibrahim
Problem name: Bulbs
Problem link: https://codeforces.com/problemset/problem/615/A
Date: 16/2/2023
*/

#include <iostream>
using namespace std;

bool arr1[101];
int arr2[101];

int main()
{
    
    int n, m, k, z;
    bool flag = true;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
        arr1[i] = false;

    for (int i = 0; i < m; i++)
        arr2[i] = i + 1;

    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        for (int j = 1; j <= k; j++)
        {
            cin >> z;
            for (int i = 0; i < m; i++)
            {
                if (arr2[i] == z)
                    arr1[i] = true;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (arr1[i] == false)
            flag = false;
    }
    
    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
