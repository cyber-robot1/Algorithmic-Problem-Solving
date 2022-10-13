/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
void NewArray(int arr1[], int arr2[], int n)
{
    int arr3[2006] = { 0 };        // the output array.
    int m = n * 2;                // size of array arr3.
    for (int i = 0; i < n; i++)
        arr3[i] = arr2[i];
    for (int i = n, j = 0; i < m && j < n; i++, j++)
        arr3[i] = arr1[j];
    for (int i = 0; i < m; i++)
        cout << arr3[i] << " ";
}
 
int A[1003], B[1003];
 
int main()
{
    int n;                           // size of arr A, arr B.
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
        cin >> B[i];
 
    NewArray(A, B, n);
 
    return 0;
}
