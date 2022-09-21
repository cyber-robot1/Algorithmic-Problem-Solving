/*
Author: Karim Tarek Ibrahim
*/
//This is a function to print the frequency array.

#include <iostream>
using namespace std;

int MaxinArray(int arr[], int n)
{
    int mx = 0;
    mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }
    return mx;
}

int MininArray(int arr[], int n)
{
    int mn;
    mn = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mn)
            mn = arr[i];
    }
    return mn;
}

int main()
{

    int n, a[100], freq[100] = { 0 };
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    int Max = MaxinArray(a, n);
    int Min = MininArray(a, n);
    for (int i = Min; i <= Max; i++)
    {
        cout << freq[i] << endl;
    }

    return 0;
}
