/*
Author: Karim Tarek Ibrahim
Problem name: Roma and Lucky Numbers
Problem link: https://codeforces.com/problemset/problem/262/A
Date: 12/2/2023
*/

#include <iostream>
using namespace std;
 
// function calculates No. of digits of the given number
int NumDigits(int n)
{
    int c = 0, temp;
    temp = n;
    while (temp != 0)
    {
        temp = temp / 10;
        c++;
    }
    return c;
}
 
// function calculates No. of 7 and 4 digits in the given number
int LuckyDigits(int n)
{
    int c = 0, temp, digit;
    temp = n;
    while (temp != 0)
    {
        digit = temp % 10;
        temp = temp / 10;
        if (digit == 7 || digit == 4)
            c++;
    }
    return c;
}
 
int arr[101];
 
int main()
{
    
    int n, k, c = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    for (int i = 0; i < n; i++)
    {
        if (NumDigits(arr[i]) == 1)
            c++;
        else
        {
            if (LuckyDigits(arr[i]) <= k)
                c++;
        }
    }
 
    cout << c;
    
    return 0;
}
