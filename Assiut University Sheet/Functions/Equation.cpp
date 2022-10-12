/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
#include <cmath>
using namespace std;

long long Equation(int x, int n)
{
    long long s = 0;           
    if (n % 2 == 0)      // (n)=> even
    {
        for (int i = 0; i <= n; i += 2)
        {
            if (i == 0)
                continue;
            else
                s = s + pow(x, i);
        }
    }
    else                // (n)=> odd
    {
        for (int i = 0; i < n; i += 2)
        {
            if (i == 0)
                continue;
            else
                s = s + pow(x, i);
        }
    }
    return s;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << Equation(x, n);

    return 0;
}
