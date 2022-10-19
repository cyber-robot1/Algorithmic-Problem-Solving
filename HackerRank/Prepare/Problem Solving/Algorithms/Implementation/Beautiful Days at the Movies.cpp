/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem
*/

#include <bits/stdc++.h>
using namespace std;

int RevNum(int n)
{
    int rev_n = 0, digit;
    while (n != 0)
    {
        digit = n % 10;
        n /= 10;
        rev_n = (rev_n * 10) + digit;
    }
    return rev_n;
}

int beautifulDays(int i, int j, int k) {
    int c = 0, rev = 0;
    for (int z = i; z <= j; z++)
    {
        rev = RevNum(z);
        if (abs(z - rev) % k == 0)
            c++;
    }
    return c;
}

int main()
{
    int i, j, k;
    cin >> i >> j >> k;
    cout << beautifulDays(i, j, k);

    return 0;
}
