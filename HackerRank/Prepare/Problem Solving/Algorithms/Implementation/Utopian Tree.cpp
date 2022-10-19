/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/utopian-tree/problem
*/

#include <bits/stdc++.h>
using namespace std;

int utopianTree(int n) {
    int h = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)                // (i is even)=> summer.
        {
            h += 1;
        }
        else                         // (i is odd)=> spring.
        {
            h *= 2;
        }
    }
    return h;
}

int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << utopianTree(n) << endl;
    }

    return 0;
}
