/*
Author: Karim Tarek Ibrahim
Problem name: Black Square
Problem link: https://codeforces.com/problemset/problem/431/A
Date: 28/1/2023
*/

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int a1, a2, a3, a4, sum = 0;
    string s;
    cin >> a1 >> a2 >> a3 >> a4;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            sum = sum + a1;
        else if (s[i] == '2')
            sum = sum + a2;
        else if (s[i] == '3')
            sum = sum + a3;
        else if (s[i] == '4')
            sum = sum + a4;
    }
    cout << sum;
 
    return 0;
}
