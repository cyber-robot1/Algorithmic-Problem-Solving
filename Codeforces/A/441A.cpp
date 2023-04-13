/*
Author: Karim Tarek Ibrahim
Problem name: Valera and Antique Items
Problem link: https://codeforces.com/problemset/problem/441/A
Date: 13/4/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;

int arr[51], sol[51];

int main()
{

    int n, v, k, c = 0;
    cin >> n >> v;
    int z = 0, index = 1;

    while (n--)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
            cin >> arr[j];

        sort(arr, arr + k);
        if (v > arr[0])
        {
            c++;
            sol[z] = index;
            z++;
        }
        index++;
    }
    
    cout << c << endl;
    for (int i = 0; i < c; i++)
        cout << sol[i] << " ";

    return 0;
}
