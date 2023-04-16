/*
Author: Karim Tarek Ibrahim
Problem name: Wet Shark and Odd and Even
Problem link: https://codeforces.com/problemset/problem/621/A
Date: 16/4/2023
*/


#include <iostream>
#include <algorithm>
using namespace std;
 
long long arr[100001];
int main()
{
 
    int n;
    long long sum = 0;
    
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    for (int i = 0; i < n; i++)
        sum += arr[i];
 
    sort(arr, arr + n);
 
    for (int i = 0; i < n; i++)
    {
        if (sum % 2 == 0)
            break;
        else
        {
            if (arr[i] % 2 != 0)
            {
                sum -= arr[i];
                break;
            }
        }
    }
    cout << sum;
 
    return 0;
}
