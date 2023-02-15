/*
Author: Karim Tarek Ibrahim
Problem name: Sereja and Dima
Problem link: https://codeforces.com/problemset/problem/381/A
Date: 15/2/2023
*/

#include <iostream>
using namespace std;
 
int arr[1001];
 
int main()
{
    int n;
    int sereja = 0, dima = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    for (int i = 0, j = n - 1, k = 1; k <= n; k++)
    {
        if (k % 2 == 0)  // dima's counter
        {
            if (arr[i] >= arr[j])
            {
                dima += arr[i];
                i++;
            }
            else
            {
                dima += arr[j];
                j--;
            }
        }
        else           // sereja's counter
        {
            if (arr[i] >= arr[j])
            {
                sereja += arr[i];
                i++;
            }
            else
            {
                sereja += arr[j];
                j--;
            }
        }
    }
    cout << sereja << " " << dima;
 
 
    return 0;
}
