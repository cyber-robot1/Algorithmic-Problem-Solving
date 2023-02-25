/*
Author: Karim Tarek Ibrahim
Problem name: The New Year: Meeting Friends
Problem link: https://codeforces.com/problemset/problem/723/A
Date: 17/2/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[3];
 
int main()
{
 
    for (int i = 0; i < 3; i++)
        cin >> arr[i];
 
    sort(arr, arr + 3);
 
    cout << (arr[2] - arr[1]) + (arr[1] - arr[0]);
 
    return 0;
}
