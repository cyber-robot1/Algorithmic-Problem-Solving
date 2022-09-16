/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
    int n, t, arr[100], mx = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                mx = arr[j];
                for (int k = i; k <= j; k++)
                {
                    if (arr[k] > mx)
                        mx = arr[k];
                }
                cout << mx << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
