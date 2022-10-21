/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/halloween-sale/problem/
*/

#include <bits/stdc++.h>
using namespace std;

int howManyGames(int p, int d, int m, int s) {
    
    int c = 0;   // (c) => num of games customer bought.
    int sum = 0; // (sum)=> total prices of games customer bought.

    int i = p;
    while (sum < s)
    {
        if (i <= m)
        {
            i = m;
            if (sum + i > s)
                break;
            else
                sum = sum + i;
            c++;
        }
        else
        {
            if (sum + i > s)
                break;
            else
                sum = sum + i;
            c++;
            i = i - d;
        }
    }
    return c;
}

int main()
{
    int p, d, m, s;
    cin >> p >> d >> m >> s;
    
    cout << howManyGames(p, d, m, s);
    
    return 0;
}
