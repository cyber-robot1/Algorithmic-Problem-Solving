/*
Author: Karim Tarek Ibrahim
Problem name: Vanya and Fence
Problem link: https://codeforces.com/problemset/problem/677/A
Date: 8/2/2023
*/

#include <iostream>
using namespace std;
 
int arr[1001];
 
int main()
{
    int n, h, c = 0;
    cin >> n >> h;
 
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > h)
            c += 2;
        else
            c += 1;
    }
    cout << c;
    
    return 0;
}
