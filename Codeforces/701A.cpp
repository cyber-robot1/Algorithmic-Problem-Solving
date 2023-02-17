/*
Author: Karim Tarek Ibrahim
Problem name: Cards
Problem link: https://codeforces.com/problemset/problem/701/A
Date: 17/2/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr1[101];
int arr2[101];
 
int main()
{
    int n, key = 0, temp = 0;
    cin >> n;
 
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
 
    for (int i = 0; i < n; i++)
        arr2[i] = arr1[i];
 
    sort(arr2, arr2 + n);
 
    key = arr2[0] + arr2[n - 1];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
 
            else
            {
                if (arr1[i] + arr1[j] == key)
                {
                    cout << i+1 << " " << j+1 << endl;
                    arr1[i] = 0;
                    arr1[j] = 0;
                }
            }
        }
    }
 
    return 0;
}
