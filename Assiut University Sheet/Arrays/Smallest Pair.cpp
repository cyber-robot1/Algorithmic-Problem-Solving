/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
    int n, A[101], T, flag = 1, min=0, result = 0;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> A[i];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                result = A[i] + A[j] + j - i;
                if (flag)
                {
                    min = result;
                    flag = 0;
                }
                else
                {
                    if (result < min)
                        min = result;
                }
                result = 0;
            }
        }
        flag = 1;
        cout << min << endl;
    }


    return 0;
}
