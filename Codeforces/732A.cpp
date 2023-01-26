/*
Author: Karim Tarek Ibrahim
Problem name: Buy a Shovel
Problem link: https://codeforces.com/problemset/problem/732/A
Date: 26/1/2023
*/

#include <iostream>
using namespace std;

int main()
{
    int k, r;
    int output = 0;
    int total_price, No_10b, Number;
    cin >> k >> r;

    for (int i = 1;; i++)
    {
        total_price = 0;
        No_10b = 0;
        Number = 0;

        total_price = i * k;
        No_10b = total_price / 10;
        Number = No_10b * 10;

        if (Number == total_price)
        {
            output = i;
            break;
        }
        
        else if (Number < total_price)
        {
            Number = Number + r;
            if (Number == total_price)
            {
                output = i;
                break;
            }
        }
    }

    cout << output;   

    return 0;
}
