/*
Author: Karim Tarek Ibrahim
Problem name: Beautiful Year
Problem link: https://codeforces.com/problemset/problem/271/A
Date: 26/1/2023
*/

#include <iostream>
using namespace std;
 
// Function to check if the digits of the given number is distinct or not
bool isDistinct(int n)
{
    //(temp)=> temporary variable to save the value of the given number. 
    int temp;
    /*
    (d1)=> the 1st digit of the given number.
    (d2)=> the 2nd digit of the given number.
    (d3)=> the 3rd digit of the given number.
    (d4)=> the 4th digit of the given number.
    */
    int d1, d2, d3, d4;
    bool flag = true;
 
    temp = n;
    
    d4 = temp % 10;
    temp = temp / 10;
    d3 = temp % 10;
    temp = temp / 10;
    d2 = temp % 10;
    temp = temp / 10;
    d1 = temp;
    
    if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4)
        flag = true;
    else
        flag = false;
    
    return flag;
}
 
int main()
{
    
    
    int num;
    cin >> num;
   
    for (int i = num + 1;; i++)
    {
        if (isDistinct(i))
        {
            cout << i;
            break;
        }
    }
 
    return 0;
}
