/*
Author: Karim Tarek Ibrahim
Problem name: Levko and Table
Problem link: https://codeforces.com/contest/361/problem/A
Date: 13/1/2023
*/

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                cout << k << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }

    return 0;
}
