/*
Author: Karim Tarek Ibrahim
Problem name: Crazy Computer
Problem link: https://codeforces.com/problemset/problem/716/A
Date: 17/2/2023
*/

#include <iostream>
using namespace std;
 
int arr[100001];
 
int main()
{
 
    int n, c, word = 0;
    cin >> n >> c;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            word++;
        else
        {
            if (arr[i] - arr[i - 1] <= c)
                word++;
            else
                word = 1;
        }
    }
    cout << word;
 
    return 0;
}
