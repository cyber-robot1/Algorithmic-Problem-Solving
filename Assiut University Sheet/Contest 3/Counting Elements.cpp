/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int start, int end, int key)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] > key)
            end = mid - 1;

        else
            start = mid + 1;
    }
    return -1;
}

int arr[1003];

int main()
{
    int n, c = 0;        // (c)=> counter.
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int start = 0, end = n - 1;      // (start)=> the start index, (end)=> the last index

    for (int i = 0; i < n; i++)
    {
        int result = binarySearch(arr, start, end, arr[i] + 1);      
        if (result == -1)
            continue;
        else
            c++;
    }

    cout << c;
    

    return 0;
}
