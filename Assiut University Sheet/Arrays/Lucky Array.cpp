/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
    int n, A[1000], c = 0, min, flag = 1;       // c = calculate frequency of the minimum element in the array.
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (flag)
        {
            min = A[i];
            flag = 0;
        }
        else
        {
            if (A[i] < min)
                min = A[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (A[i] == min)
            c++;
    }
    if (c % 2 == 0)
        cout << "Unlucky";
    else
        cout << "Lucky";
    



    return 0;
}
