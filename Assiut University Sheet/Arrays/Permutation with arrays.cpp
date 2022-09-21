/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
 
using namespace std;
 
void bubblesort(int a[], int n)
{
    int flag = 1;
    // number of iterations.
    for (int i = 0; i < n - 1; i++)         
    {
        if(flag!=0)
        // comparing & swapping loop, with cancelling the last element each iteration.
        for (int j = 0; j < n - i - 1; j++)        
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = 1;
            }
        }
        
    }
}
 
int main()
{
    int n, A[1000], B[1000];
    bool flag=true;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>B[i];
    }
    
    bubblesort(A, n);
    bubblesort(B, n);
    
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(A[i]==B[j])
                break;
            else
            {
                flag=false;
                break;
            }
        }
    }
    if(flag)
    cout<<"yes";
    else
    cout<<"no"; 
    
 
    return 0;
}
