/*
Author: Karim Tarek Ibrahim
*/
// This is a function to print all possible non-empty sub-arrays of a given array.

#include <iostream>
using namespace std;

void subArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)                               // number of iterations. (Start Point)
    {
        for (int j = i; j < n; j++)                          // number of arrays each iteration. (End Point)
        {
            for (int k = i; k <= j; k++)                    // number of elements in each sub-array each iteration.
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    int n, A[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    subArray(A,n);

    return 0;
}
