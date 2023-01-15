/*
Author: Karim Tarek Ibrahim
Problem name: Little Pony and Crystal Mine
Problem link: https://codeforces.com/problemset/problem/454/A
Date: 15/1/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
    /*
     (numD)=> No. of Diamonds in each row
     (numA)=> No. of Asteriks in each row
    */
    
    int n, numD = 0, numA = 0, temp = 0;
    cin >> n;
 
    for (int i = 0; i < n; i++)       // No. of rows to be printed.
    {
        if (i > (n / 2))
            temp = (n - 1) - i;
        else
            temp = i;
        
        numD = (temp * 2) + 1;
        numA = n - numD;
 
        for (int k = 0; k < numA / 2; k++)
            cout << "*";
        for (int k = 0; k < numD; k++)
            cout << "D";
        for (int k = 0; k < numA / 2; k++)
            cout << "*";
        
        cout << endl;
    }
 
    return 0;
}
