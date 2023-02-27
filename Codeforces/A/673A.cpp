/*
Author: Karim Tarek Ibrahim
Problem name: Bear and Game
Problem link: https://codeforces.com/problemset/problem/673/A
Date: 27/2/2023
*/

#include <iostream>
using namespace std;

int arr[91];

int main()
{
    
    int n, res = 0;
    bool flag = true;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (arr[0] > 15)
    {
        res = 15;
        flag = false;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] > 15)
            {
                res = arr[i - 1] + 15;
                flag = false;
                break;
            }
            else if (arr[i] - arr[i - 1] < 15)
                res = arr[i];

            else if (arr[i] - arr[i - 1] == 15)
                res = arr[i];
        }
    }
    
    if (res == 0)
        res = arr[0] + 15;
    else
    {
        if (flag)
        {
            if (res <= 15)
                res = res + 15;
            else
            {
                if (90 - res <= 15)
                    res = 90;
                else
                    res = res + 15;
            }
        }
    }
    
    cout << res;

    return 0;
}
