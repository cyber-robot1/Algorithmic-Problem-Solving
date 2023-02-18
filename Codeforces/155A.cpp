/*
Author: Karim Tarek Ibrahim
Problem name: I_love_\%username\%
Problem link: https://codeforces.com/problemset/problem/155/A
Date: 18/2/2023
*/

#include <iostream>
using namespace std;
 
int arr[1001];
 
int main()
{
    int n, c1 = 0, c2 = 0;
    bool f1 = true, f2 = true;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    // Condition 1 (Getting highest score ever):
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            continue;
        else
        {
            for (int k = i; k >= 1; k--)
            {
                if (arr[i] > arr[k - 1])
                    f1 = true;
                else
                {
                    f1 = false;
                    break;
                }
            }
            if (f1)
                c1++;
        }
    }
 
    // Condition 2 (Getting lowest score ever):
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            continue;
        else
        {
            for (int k = i; k >= 1; k--)
            {
                if (arr[i] < arr[k - 1])
                    f2 = true;
                else
                {
                    f2 = false;
                    break;
                }
            }
            if (f2)
                c2++;
        }
    }
    
    cout << c1 + c2;
 
 
    return 0;
}
