/*
Author: Karim Tarek Ibrahim
Problem name: Game Outcome
Problem link: https://codeforces.com/problemset/problem/157/A
Date: 24/4/2023
*/

#include <iostream>
using namespace std;
 
int arr[31][31];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
 
    int row = 0, column = 0, winning_squares = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
                row += arr[i][k];
            
            for (int k = 0; k < n; k++)
                column += arr[k][j];
 
            if (column > row)
                winning_squares++;
            
            row = 0;
            column = 0;
        }
    }
 
    cout << winning_squares;
 
    return 0;
}
