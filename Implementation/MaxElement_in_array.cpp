/*
Author: Karim Tarek Ibrahim
*/
// This is a function to calculate the maximum element in a given array.

#include <iostream>
using namespace std;

void MaxinArray(int arr[], int n)
{
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mx = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }
    cout << mx;
}
int main()
{


    int n, a[100];
    cin >> n;
    MaxinArray(a, n);


    return 0;
}
