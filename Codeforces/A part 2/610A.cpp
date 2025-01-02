/*
Author: Karim Tarek Ibrahim
Problem name: Pasha and Stick
Problem link: https://codeforces.com/problemset/problem/610/A
Date: 3/1/2025
*/

#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        int res = ((n / 2) - 1) / 2;
        if (res)
            cout << res << endl;
        else
            cout << 0 << endl;
    }
    else
        cout << 0 << endl;
        
    return 0;
}
