/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;


int main()
{

    int n, a[1000], mn, mx = 0, pos_mx = 0, pos_mn = 0, i = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mx = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
            pos_mx = i;
        }
    }
    mn = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] < mn)
        {
            mn = a[i];
            pos_mn = i;
        }
    }
    swap(a[pos_mn], a[pos_mx]);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
