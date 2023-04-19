/*
Author: Karim Tarek Ibrahim
Problem name: Business trip
Problem link: https://codeforces.com/problemset/problem/149/A
Date: 19/4/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int SumElements(int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}
 
int arr[12];
int main()
{
    int k, c = 0;
    int s = 0;
    cin >> k;
    for (int i = 0; i < 12; i++)
        cin >> arr[i];
 
    sort(arr, arr + 12);
    reverse(arr, arr + 12);
    s = SumElements(12, arr);
    
    if (s < k)
        c = -1;
    else
    {
        for (int i = 0; k > 0; i++)
        {
            k -= arr[i];
            c++;
        }
    }
    
    cout << c;
 
    return 0;
}
