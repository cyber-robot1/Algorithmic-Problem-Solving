/*
Author: Karim Tarek Ibrahim
Problem name: I Wanna Be the Guy
Problem link: https://codeforces.com/problemset/problem/469/A
Date: 14/4/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
// function to return (true) if all elements of the given array are zeros
bool isAllZero(int n, int arr[])
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            c++;
    }
    if (c == n)
        return true;
    else
        return false;
}
 
int arr[101], arrP[101], arrQ[101];
int main()
{
 
    int n, p, q;
    cin >> n;
 
    for (int i = 0, j = 1; i < n; i++, j++)
        arr[i] = j;
 
    cin >> p;
    for (int i = 0; i < p; i++)
        cin >> arrP[i];
    sort(arrP, arrP + p);
 
    cin >> q;
    for (int i = 0; i < q; i++)
        cin >> arrQ[i];
    sort(arrQ, arrQ + q);
 
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arrP[i] == arr[j])
            {
                arr[j] = 0;
                break;
            }
        }
    }
 
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arrQ[i] == arr[j])
            {
                arr[j] = 0;
                break;
            }
        }
    }
 
    if (isAllZero(n, arr))
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
 
 
    return 0;
}
