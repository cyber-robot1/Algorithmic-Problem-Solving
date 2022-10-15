/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/diagonal-difference/problem
*/

#include <bits/stdc++.h>
using namespace std;

const int n = 500;

int diagonalDifference(int arr[500][500], int n) {
    int sum_d1 = 0, sum_d2 = 0;                                  // (sum_d1)=> sum of primary diagonal elements, (sum_d2)=> sum of secondary diagonal elements.
    for (int i = 0, j = 0; i < n && j < n; i++, j++)            // sum of primary diagonal elements.
        sum_d1 += arr[i][j];

    for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--)      // sum of secondary diagonal elements.
        sum_d2 += arr[i][j];

    int result = abs((sum_d1)-(sum_d2));
    return result;
}

int arr[500][500];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    cout << diagonalDifference(arr, n);


    return 0;
}
