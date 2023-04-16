/*
Author: Karim Tarek Ibrahim
Problem name: Kefa and First Steps
Problem link: https://codeforces.com/problemset/problem/580/A
Date: 16/4/2023
*/

#include <iostream>
using namespace std;
 
bool isAllZero(int n, int arr[])
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            c++;
    }
    if (c == n)
        return true;
    else
        return false;
}
 
int MaxinArray(int n, int arr[])
{
    int mx = 0;
    mx = arr[0];
    for (int i= 1; i < n; i++)
    {
        if (arr[i] >= mx)
            mx = arr[i];
    }
    return mx;
}
 
int arr[100001], sub[100001];
int main()
{
    int n, c = 1, mx = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i + 1] >= arr[i])
        {
            c++;
            sub[i] = c;
        }
        else
            c = 1;
    }
    
    mx = MaxinArray(n, sub);
 
    if (isAllZero(n, sub))
        cout << 1;
    else
        cout << mx;
 
 
    return 0;
}
