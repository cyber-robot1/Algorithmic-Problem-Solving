/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/find-digits/problem
*/

#include <bits/stdc++.h>

using namespace std;

int findDigits(int n) {
    int digit, temp, c = 0;
    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        if (digit != 0)
        {
            if (n % digit == 0)
                c++;
        }
        temp = temp / 10;
    }

    return c;
}

int main()
{

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << findDigits(n) << endl;
    }


    return 0;
}
