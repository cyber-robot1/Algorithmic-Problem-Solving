/*
Author: Karim Tarek Ibrahim
Problem name: Lights Out
Problem link: https://codeforces.com/problemset/problem/275/A
Date: 11/3/2023
*/

#include <iostream>
using namespace std;
 
int arr[3][3], res[3][3];
 
int main()
{
 
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
    }
 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0 && j == 0)
            {
                sum = arr[0][0] + arr[0][1] + arr[1][0];
                if (sum % 2 == 0)
                    res[0][0] = 1;
                else
                    res[0][0] = 0;
            }
 
            else if (i == 0 && j == 2)
            {
                sum = arr[0][2] + arr[0][1] + arr[1][2];
                if (sum % 2 == 0)
                    res[0][2] = 1;
                else
                    res[0][2] = 0;
            }
 
            else if (i == 2 && j == 0)
            {
                sum = arr[2][0] + arr[2][1] + arr[1][0];
                if (sum % 2 == 0)
                    res[2][0] = 1;
                else
                    res[2][0] = 0;
            }
 
            else if (i == 2 && j == 2)
            {
                sum = arr[2][2] + arr[2][1] + arr[1][2];
                if (sum % 2 == 0)
                    res[2][2] = 1;
                else
                    res[2][2] = 0;
            }
 
            else if (i == 1 && j == 0)
            {
                sum = arr[1][0] + arr[1][1] + arr[0][0] + arr[2][0];
                if (sum % 2 == 0)
                    res[1][0] = 1;
                else
                    res[1][0] = 0;
            }
 
            else if (i == 1 && j == 2)
            {
                sum = arr[1][2] + arr[1][1] + arr[0][2] + arr[2][2];
                if (sum % 2 == 0)
                    res[1][2] = 1;
                else
                    res[1][2] = 0;
            }
 
            else if (i == 2 && j == 1)
            {
                sum = arr[2][1] + arr[2][2] + arr[2][0] + arr[1][1];
                if (sum % 2 == 0)
                    res[2][1] = 1;
                else
                    res[2][1] = 0;
            }
 
            else if (i == 0 && j == 1)
            {
                sum = arr[0][1] + arr[0][0] + arr[0][2] + arr[1][1];
                if (sum % 2 == 0)
                    res[0][1] = 1;
                else
                    res[0][1] = 0;
            }
 
            else if (i == 1 && j == 1)
            {
                sum = arr[1][1] + arr[1][0] + arr[1][2] + arr[2][1] + arr[0][1];
                if (sum % 2 == 0)
                    res[1][1] = 1;
                else
                    res[1][1] = 0;
            }
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << res[i][j];
 
        cout << endl;
    }
 
 
    return 0;
}
