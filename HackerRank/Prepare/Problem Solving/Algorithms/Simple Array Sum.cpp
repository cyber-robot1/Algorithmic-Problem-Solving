/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/simple-array-sum/problem
*/

#include <bits/stdc++.h>
using namespace std;

int simpleArraySum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int n, ar[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << simpleArraySum(ar, n);



    return 0;
}
