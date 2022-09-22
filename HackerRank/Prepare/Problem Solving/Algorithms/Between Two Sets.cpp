/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/between-two-sets/problem
*/

#include <bits/stdc++.h>
using namespace std;

void bubblesort(int a[], int n)
{
    int flag = 1;
    // number of iterations.
    for (int i = 0; i < n - 1; i++)
    {
        if (flag != 0)
            // comparing & swapping loop, with cancelling the last element each iteration.
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    flag = 1;
                }
            }
    }
}

int getTotalX(int a[], int b[], int n, int m) {
    int c=0;
    bool flag=true;
    bubblesort(a, n);
    for (int i = a[n - 1]; i <= b[0]; i++)
    {
        //check if all the elements of first array are factors of temp.
        for (int k = 0; k < n; k++)
        {
            if (i % a[k] == 0)
                flag = true;
            else
            {
                flag = false;
                break;
            }
        }
        // check if temp is factor to all elements of second array.
        if (flag)
        {
            for (int k = 0; k < m; k++)
            {
                if (b[k] % i == 0)
                    flag = true;
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            c++;
    }
    return c;
}

int main()
{
    int n, m;
    int a[100], b[100];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cout<<getTotalX(a, b, n, m);

    return 0;
}
