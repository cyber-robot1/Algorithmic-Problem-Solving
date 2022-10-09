/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
#include <algorithm>
using namespace std;

long long arr[1003];

int main()
{
    int k, n;
    long long sum = 0, mx = 0;
    bool flag = true;

    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr + n);
    reverse(arr, arr + n);

    for (int i = 0; i < k; i++)
    {
        sum = sum + arr[i];
        if (flag)
        {
            mx = sum;
            flag = false;
        }
        else
        {
            if (sum > mx)
                mx = sum;
        }
    }

    if (mx < 0)                       // if all elements of the given array are negative numbers, so that maximum = 0.
        cout << 0;
    else
        cout << mx;

    return 0;
}
