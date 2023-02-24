/*
Author: Karim Tarek Ibrahim
Problem name: Cupboards
Problem link: https://codeforces.com/problemset/problem/248/A
Date: 27/1/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
    
    int n, l, r, output;
    int c_l0 = 0, c_l1 = 0, c_r0 = 0, c_r1 = 0;
    int min_l, min_r;
    cin >> n;
    while (n--)
    {
        cin >> l >> r;
        
        if (l == 0)
            c_l0++;
        else if (l == 1)
            c_l1++;
        
        if (r == 0)
            c_r0++;
        else if (r == 1)
            c_r1++;
    }
    if (c_l0 <= c_l1)
        min_l = c_l0;
    else
        min_l = c_l1;
 
    if (c_r0 <= c_r1)
        min_r = c_r0;
    else
        min_r = c_r1;
    
    output = min_l + min_r;
    cout << output;
    
 
    return 0;
}
