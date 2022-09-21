/*
Author: Karim Tarek Ibrahim
*/
// This is a function to calculate the minimum element in a given array.

#include <iostream>
using namespace std;

void MininArray(int arr[], int n)
{
    int mn;
    mn = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mn)
            mn = arr[i];
    }
    cout << mn;
}
int main()
{

    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    MininArray(a, n);

    return 0;
}
