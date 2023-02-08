/*
Author: Karim Tarek Ibrahim
Problem name: Maximum in Table
Problem link: https://codeforces.com/problemset/problem/509/A
Date: 8/2/2023
*/

#include <iostream>
using namespace std;
 
int arr[10][10];
 
int main()
{
    
    int n;
    cin >> n;
 
    for (int i = 0; i < n; i++)   // Setting the first row equal to 1
        arr[0][i] = 1;
 
    for (int i = 0; i < n; i++)  // Setting the first column equal to 1
        arr[i][0] = 1;
 
 
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }
 
    cout << arr[n - 1][n - 1];
    
    return 0;
}
