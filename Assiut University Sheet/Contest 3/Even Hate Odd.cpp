/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int arr[100003];

int main()
{
    int n, t;
    int result = 0;
    int n_e = 0, n_o = 0;     // (n_e)=> number of even numbers, (n_o)=> number of odd numbers.
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                    n_e++;
                else
                    n_o++;
            }
            if (n_e == n_o)
                result = 0;
            else
            {
                if (n_e > n_o)
                    result = n_e - n / 2;
                else
                    result = n_o - n / 2;
            }
        }
        else
            result = -1;
        cout << result << endl;
        result = 0;
        n_e = 0;
        n_o = 0;
    }
    
    return 0;
}
