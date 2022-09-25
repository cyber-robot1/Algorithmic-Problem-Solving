/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/electronics-shop/problem
*/

#include <bits/stdc++.h>
using namespace std;

int getMoneySpent(int keyboards[], int n, int drives[], int m, int b) {
    int mx = 0, sum = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum = sum + keyboards[i] + drives[j];
            if (sum <= b)
            {
                if (flag)
                {
                    mx = sum;
                    flag = false;
                }
                else
                {
                    if (sum > mx)
                        mx = sum;
                }
            }
            sum = 0;
        }
    }
    if (mx)
    {
        if (mx <= b)
            return mx;
        else
            return -1;
    }
    else
        return -1;
}

int main()
{
   int b, n, m,  A[1000], B[1000];
   cin >> b >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }
    cout<<getMoneySpent(A, n, B, m, b);
   
   
    return 0;
}
