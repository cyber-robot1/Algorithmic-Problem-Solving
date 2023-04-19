/*
Author: Karim Tarek Ibrahim
Problem name: Oath of the Night's Watch
Problem link: https://codeforces.com/problemset/problem/768/A
Date: 19/4/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[100005];
int main()
{
    int n, stewards = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[0] && arr[i] < arr[n - 1])
            stewards++;
    }
    cout << stewards;
 
    return 0;
}
