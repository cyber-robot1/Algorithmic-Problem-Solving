/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
    
    long long n, A[100000], B[100000];
    bool flag = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int j = 0, i = n - 1; j < n && i >= 0; j++, i--)
    {
        B[j] = A[i];
    }
    for (int i = 0, j = 0; i < n && j < n; i++, j++)
    {
        if (A[i] == B[j])
            continue;
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    
    
    return 0;
}

