/*
Author: Karim Tarek Ibrahim
Problem name: Perfect Permutation
Problem link: https://codeforces.com/problemset/problem/233/A
Date: 11/1/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
    
    int n;
    cin >> n;
    if (n % 2 != 0)               // n is odd.
        cout << -1;
    else                         // n is even.
    {
        if (n == 2)
            cout << 2 << " " << 1;
        else
        {
            if ((n / 2) % 2 == 0)
            {
                for (int i = n / 2; i >= 1; i--)
                    cout << i << " ";
                for (int i = n; i >= (n / 2) + 1; i--)
                    cout << i << " ";
            }
            else
            {
                for (int i = (n / 2) + 1; i <= n; i++)
                    cout << i << " ";
                for (int i = 1; i <= n / 2; i++)
                    cout << i << " ";
            }
        }
    }
    
 
    return 0;
}
