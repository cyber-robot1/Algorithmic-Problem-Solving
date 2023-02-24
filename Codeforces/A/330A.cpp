/*
Author: Karim Tarek Ibrahim
Problem name: Cakeminator
Problem link: https://codeforces.com/problemset/problem/330/A
Date: 20/2/2023
*/

#include <iostream>
using namespace std;
 
char arr[11][11];
int res[11][11];
 
int main()
{
    
    int r, c, cell = 0;
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
            cin >> arr[i][j];
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
            res[i][j] = 1;
    }
 
    // Eating all empty rows
    for (int i = 1; i <= r; i++)
    {
        bool empty_r = true;
        for (int j = 1; j <= c; j++)
        {
            if (arr[i][j] == 'S')
            {
                empty_r = false;
                break;
            }
        }
        if (empty_r)
        {
            for (int j = 1; j <= c; j++)
            {
                cell = cell + res[i][j];
                res[i][j] = 0;
            }
        }
    }
 
    // Eating all empty columns
    for (int j = 1; j <= c; j++)
    {
        bool empty_c = true;
        for (int i = 1; i <= r; i++)
        {
            if (arr[i][j] == 'S')
            {
                empty_c = false;
                break;
            }
        }
        if (empty_c)
        {
            for (int i = 1; i <= r; i++)
                cell = cell + res[i][j];
        }
    }
 
    cout << cell;
 
    return 0;
}
