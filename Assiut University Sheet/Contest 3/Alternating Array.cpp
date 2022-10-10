/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
#include <algorithm>
using namespace std;

int C1(int arr[], int n)
{
    int c1 = 0;                   // (c1)=> counter
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            break;
        else
        {
            if (arr[i] > 0)     // +ve
            {
                if (arr[i + 1] > 0)
                {
                    arr[i + 1] = arr[i + 1] * -1;
                    c1++;
                }
                else
                    continue;
            }
            else            // -ve
            {
                if (arr[i + 1] > 0)
                    continue;
                else
                {
                    arr[i + 1] = arr[i + 1] * -1;
                    c1++;
                }
            }
        }
    }
    return c1;
}

int C2(int arr[], int n)
{
    int c2 = 1;      // (c2)=> counter
    arr[0] = arr[0] * -1;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            break;
        else
        {
            if (arr[i] > 0)   // +ve
            {
                if (arr[i + 1] > 0)
                {
                    arr[i + 1] = arr[i + 1] * -1;
                    c2++;
                }
                else
                    continue;
            }
            else          // -ve
            {
                if (arr[i + 1] > 0)
                    continue;
                else
                {
                    arr[i + 1] = arr[i + 1] * -1;
                    c2++;
                }
            }
        }
    }
    return c2;
}

int arr1[100003];
int arr2[100003];

int main()
{
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    int x = C1(arr1, n);
    int y = C2(arr2, n);
    cout << min(x, y);


    return 0;
}
