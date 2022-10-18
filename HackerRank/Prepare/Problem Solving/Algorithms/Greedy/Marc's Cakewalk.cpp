/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/marcs-cakewalk/problem 
*/

#include <bits/stdc++.h>
using namespace std;

long marcsCakewalk(int calorie[], int n) {
    long res = 0, temp;        // (res)=> result variable.
  
    sort(calorie, calorie + n);
    reverse(calorie, calorie + n);
  
    for (int i = 0, j = 0; i < n && j < n; i++, j++)
    {
        temp = pow(2, j) * calorie[i];
        res += temp;
    }
    return res;
}

int arr[100];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << marcsCakewalk(arr, n);

    return 0;
}
