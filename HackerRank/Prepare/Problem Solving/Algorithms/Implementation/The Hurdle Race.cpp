/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/the-hurdle-race/problem
*/

#include <bits/stdc++.h>
using namespace std;

int MaxinArray(int arr[], int n)
{
    int mx = 0;
    mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }
    return mx;
}

int hurdleRace(int k, int height[], int n) {
    int mx;
    mx = MaxinArray(height, n);
    if (k >= mx)
        return 0;
    else
        return mx - k;
}


int main()
{
    
    int n, arr[100], k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << hurdleRace(k, arr, n);
    


    return 0;
}
