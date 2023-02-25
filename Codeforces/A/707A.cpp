/*
Author: Karim Tarek Ibrahim
Problem name: Brain's Photos
Problem link: https://codeforces.com/problemset/problem/707/A
Date: 31/1/2023
*/

#include <iostream>
using namespace std;
 
char arr[103][103];
 
int main()
{
    int n, m;
    bool flag = false;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y')
            {
                flag = true;
                break;
            }
        }
        if (flag)
            break;
    }
  
    if (flag)
        cout << "#Color";
    else
        cout << "#Black&White";
 
    return 0;
}
