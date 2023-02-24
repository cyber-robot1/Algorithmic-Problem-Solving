/*
Author: Karim Tarek Ibrahim
Problem name: Even Odds
Problem link:  https://codeforces.com/problemset/problem/318/A
Date: 14/9/2022
*/

#include <iostream>
using namespace std;
 
int main()
{
    long long num, position;
    cin >> num >> position;
    if (num % 2 == 0)
    {
        if (position <= (num / 2))           // position in the odd side
        {
            cout << (position * 2) - 1;
        }
        else                                // position in the even side.
        {
            cout << (position - ((num + 1) / 2)) * 2;
        }
    }
    else
    {
        if (position <= ((num + 1) / 2))         // position in the odd side.
        {
            cout << (position * 2) - 1;
        }
        else                                    // position in the even side.
        {
            cout << (position - ((num + 1) / 2)) * 2;
        }
    }
 
    
    return 0;
}
