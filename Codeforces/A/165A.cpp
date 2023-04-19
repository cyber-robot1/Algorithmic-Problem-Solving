/*
Author: Karim Tarek Ibrahim
Problem name: Supercentral Point
Problem link: https://codeforces.com/problemset/problem/165/A
Date: 19/4/2023
*/

#include <iostream>
using namespace std;
 
int x[201], y[201];
int main()
{
    int n, super = 0;
    int right = 0, left = 0, upper = 0, lower = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            else
            {
                
                if (x[j] > x[i] && y[j] == y[i])            // right neighbor
                    right++;
                else if (x[j] < x[i] && y[j] == y[i])           // left neighbor
                    left++;
                else if (x[j] == x[i] && y[j] > y[i])          // upper neighbor
                    upper++;
                else if (x[j] == x[i] && y[j] < y[i])         // lower neighbor
                    lower++;
            }
        }
        
        if (right > 0 && left > 0 && upper > 0 && lower > 0)
            super++;
 
        right = 0;
        left = 0;
        upper = 0;
        lower = 0;
    }
    
    cout << super;
 
    return 0;
}
