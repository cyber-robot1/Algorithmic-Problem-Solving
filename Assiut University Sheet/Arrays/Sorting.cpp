/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

void bubblesort(int a[], int n)
{
    int flag = 0;
    // number of iterations.
    for (int i = 0; i < n - 1; i++)         
    {
        // comparing & swapping loop, with cancelling the last element each iteration.
        for (int j = 0; j < n - i - 1; j++)        
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = 1;
            }
        }
        if (!flag)
            break;
    }
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}


int main()
{
    
    int n, a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubblesort(a, n);
    printArray(a, n);

    return 0;
}


