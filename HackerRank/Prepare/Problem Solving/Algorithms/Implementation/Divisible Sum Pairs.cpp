/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/divisible-sum-pairs/problem
*/

#include <iostream>
using namespace std;

int divisibleSumPairs(int n, int k, int ar[])
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                if ((ar[i] + ar[j]) % k == 0)
                    c++;
            }
        }
    }
    return c;
}
int main()
{
    int n, k, arr[1000];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << divisibleSumPairs(n, k, arr);
    


    return 0;
}
