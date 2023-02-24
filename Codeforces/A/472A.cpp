/*
Author: Karim Tarek Ibrahim
Problem name: Design Tutorial: Learn from Math
Problem link: https://codeforces.com/problemset/problem/472/A
Date: 7/2/2023
*/

#include <iostream>
using namespace std;

bool isComposite(int num)
{
    bool pri_flag = true, comp_flag;

    if (num == 0 || num == 1)
        comp_flag = false;

    else if (num == 2)
        comp_flag = false;

    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                pri_flag = false;
                break;
            }
        }

        if (pri_flag)
            comp_flag = false;

        else
            comp_flag = true;
    }

    return comp_flag;
}

int main()
{

    int n, x = 0, y = 0;
    cin >> n;
    
    for (int i = 4; i <= n; i++)
    {
        if (isComposite(i))
        {
            x = i;
            y = n - x;
            if (isComposite(y))
            {
                cout << x << " " << y;
                break;
            }
        }
    }
    
    return 0;
}
