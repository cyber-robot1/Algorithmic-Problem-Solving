/*
Author: Karim Tarek Ibrahim
Problem name: Amr and Music
Problem link: https://codeforces.com/problemset/problem/507/A
Date: 2/5/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[101], Copy[101], res[101], temp[101];
int main()
{
    int n, k;
    int c = 0, size_temp = 0, size_res = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
 
    for (int i = 1; i <= n; i++)
        Copy[i] = arr[i];
 
    sort(Copy, Copy + n + 1);
 
    for (int i = 1, j = 1; i <= n; i++)
    {
        if (k - Copy[i] >= 0)
        {
            k -= Copy[i];
            temp[j] = Copy[i];
            c++;
            j++;
            size_temp++;
        }
        else
            break;
    }
    
    for (int i = 1,k=1; i <= size_temp; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (temp[i] == arr[j])
            {
                res[k] = j;
                arr[j] = 0;
                k++;
                size_res++;
                break;
            }
        }
    }
    
    cout << c << endl;
    for (int i = 1; i <= size_res; i++)
        cout << res[i] << " ";
 
 
    return 0;
}
