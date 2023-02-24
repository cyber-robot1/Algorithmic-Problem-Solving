/*
Author: Karim Tarek Ibrahim
Problem name: Games
Problem link: https://codeforces.com/problemset/problem/268/A
Date: 12/2/2023
*/

#include <iostream>
using namespace std;

int host[31], guest[31];

int main()
{
    
    int n, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> host[i] >> guest[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            else
            {
                if (host[i] == guest[j])
                    c++;
            }
        }
    }
    cout << c;
    
    return 0;
}
