/*
Author: Karim Tarek Ibrahim
Problem name: A Good Contest
Problem link: https://codeforces.com/problemset/problem/681/A
Date: 16/1/2023
*/

#include <iostream>
using namespace std;

int main()
{
    int n, before, after;
    bool flag = false;
    string handle;
    
    cin >> n;
    while (n--)
    {
        cin >> handle >> before >> after;
        if (before >= 2400 && after > before)
            flag = true;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
