/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/plus-minus/problem
*/

#include <bits/stdc++.h>
using namespace std;

void plusMinus(int arr[], int n) {
    
    double n_p = 0, n_n = 0, n_0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            n_p++;
        else if (arr[i] < 0)
            n_n++;
        else
            n_0++;
    }
    cout << fixed << setprecision(6) << n_p / n << endl;
    cout << fixed << setprecision(6) << n_n / n << endl;
    cout << fixed << setprecision(6) << n_0 / n << endl;
}

int main()
{
    int n, arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    plusMinus(arr, n);

    return 0;
}
