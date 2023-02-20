/*
Author: Karim Tarek Ibrahim
Problem name: Line to Cashier
Problem link: https://codeforces.com/problemset/problem/408/A
Date: 21/2/2023
*/

#include <iostream>
using namespace std;

int MininArray(int size, int arr[])
{
    int mn = 0;
    bool flag = true;
    for (int i = 1; i <= size; i++)
    {
        if (flag)
        {
            mn = arr[i];
            flag = false;
        }
        else
        {
            if (arr[i] <= mn)
                mn = arr[i];
        }
    }
    return mn;
}

int k[101], queue[101];

int main()
{

    int n, m;
    int min_seconds = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> k[i];
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k[i]; j++)
        {
            cin >> m;
            queue[i] = queue[i] + (m * 5) + 15;
        }
    }
    min_seconds = MininArray(n, queue);
    cout << min_seconds;


    return 0;
}
