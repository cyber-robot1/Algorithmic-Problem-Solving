/*
Author: Karim Tarek Ibrahim
Problem name: Playing with Dice
Problem link: https://codeforces.com/problemset/problem/378/A
Date: 12/9/2022
*/

#include <iostream>
using namespace std;

int main()
{
    
    int a, b, c_F = 0, c_S = 0, c_D = 0;      // c_F = counter of first player, c_S = counter of second player, c_D = counter of draw.
    cin >> a >> b;
    for (int i = 1; i <= 6; i++)
    {
        if (abs(a - i) < abs(b - i))
            c_F++;
        else if (abs(b - i) < abs(a - i))
            c_S++;
        else
            c_D++;
    }
    cout << c_F << " " << c_D << " " << c_S;


    return 0;
}
