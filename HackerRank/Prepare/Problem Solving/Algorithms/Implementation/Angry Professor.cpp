/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/angry-professor/problem
*/

#include <bits/stdc++.h>
using namespace std;

string angryProfessor(int a[], int n, int k) {
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 0)
            c++;
    }
    if (c >= k)
        return "NO";
    else
        return "YES";
    cout<<endl;
}

int main()
{
   int t, n, k, arr[1000];
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout<<angryProfessor(arr, n, k)<<endl;
    }

    return 0;
}
