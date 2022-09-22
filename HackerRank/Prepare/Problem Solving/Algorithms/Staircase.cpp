/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/staircase/problem
*/

#include <bits/stdc++.h>
using namespace std;

void staircase(int n) {
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "#";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin>>n;
    staircase(n);

    return 0;
}
