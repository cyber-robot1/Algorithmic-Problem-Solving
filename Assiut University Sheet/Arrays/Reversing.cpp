/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
    
    long long n, A[1000], B[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int j = 0, i = n - 1; j < n && i >= 0; j++, i--)
    {
        B[j] = A[i];
    }
    for (int k = 0; k < n; k++)
    {
        cout << B[k] << " ";
    }
    
  
    return 0;
}


