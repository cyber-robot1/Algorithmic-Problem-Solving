/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/permutation-equation/problem
*/

#include <bits/stdc++.h>
using namespace std;

void permutationEquation(int p[], int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (p[p[j]] == i)
                cout << j << endl;
        }
    }
}

int main()
{
    int n, arr[100];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    permutationEquation(arr, n);
    
    return 0;
}
