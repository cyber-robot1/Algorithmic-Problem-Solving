/*
Author: Karim Tarek Ibrahim
*/

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

int arr[1003];

int main()
{
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int mn = MininArray(arr, n);
    int mx = MaxinArray(arr, n);
    
    cout << mn << " " << mx;


    return 0;
}
