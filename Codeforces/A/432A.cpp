/*
Author: Karim Tarek Ibrahim
Problem name: Choosing Teams
Problem link: https://codeforces.com/problemset/problem/432/A
Date: 21/2/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[2001];
 
int main()
{
    
    int n, k, c = 1, teams = 0;
    bool flag = true;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
 
    sort(arr, arr + n + 1);
 
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= n; j++)
            arr[j]++;
    }
 
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            if (arr[i] <= 5)
                teams++;
            else
                break;
        }
        else
        {
            if (arr[i] <= 5)
                continue;
            else
                break;
        }
    }
    cout << teams;
 
 
    return 0;
}
