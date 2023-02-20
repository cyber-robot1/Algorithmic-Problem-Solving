/*
Author: Karim Tarek Ibrahim
Problem name: Vanya and Cards
Problem link: https://codeforces.com/problemset/problem/401/A
Date: 21/2/2023
*/

#include <iostream>
using namespace std;
 
int arr[1001];
 
int main()
{
    int n, x;
    int sum = 0, card = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    // Getting sum of all elements in the given array
    for (int i = 0; i < n; i++)
        sum += arr[i];
 
    sum = abs(sum);
    
    int i = x;
    while (sum != 0)
    {
        if (sum < i)
        {
            i--;
        }
        else
        {
            sum = sum - i;
            card++;
        }
    }
    cout << card;
 
 
    return 0;
}
