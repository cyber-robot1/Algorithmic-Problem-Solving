/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
#include <algorithm>
using namespace std;

int arr[1003];

int main()
{
    int n;
    int c = 0;     // counter
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            c++;
            continue;
        }
        else
        {
            if (arr[i] == arr[i - 1])
                continue;
            else
                c++;
        }
    }
    cout << c;

    return 0;
}
