/*
Author: Karim Tarek Ibrahim
Problem name: Shaass and Oskols
Problem link: https://codeforces.com/problemset/problem/294/A
Date: 19/2/2023
*/

#include <iostream>
using namespace std;
 
int arr[101];
 
int main()
{
    
    int n, m;
    int x, y;
    int temp = 0;
 
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    cin >> m;
    
    while (m--)
    {
        cin >> x >> y;
        temp = arr[x];
 
        for (int i = 1; i < y; i++)
            arr[x - 1]++;
 
        for (int i = 1; i <= y; i++)
            arr[x]--;
 
        for (int i = y + 1; i <= temp; i++)
            arr[x + 1]++;
 
        for (int i = y + 1; i <= temp; i++)
            arr[x]--;
    }
    
    for (int i = 1; i <= n; i++)
        cout << arr[i] << endl;
 
 
    return 0;
}
