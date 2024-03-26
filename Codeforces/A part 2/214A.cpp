/*
Author: Karim Tarek Ibrahim
Problem name: System of Equations
Problem link: https://codeforces.com/problemset/problem/214/A
Date: 26/3/2024
*/

#include <iostream>
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
 
    int pairs = 0;
    for (int a = 0; a <= 1000; a++)
    {
        for (int b = 0; b <= 1000; b++)
        {
            int e1 = a * a + b;
            int e2 = a + b * b;
            if (e1 == n && e2 == m)
                pairs++;
        }
    }
    cout << pairs;
 
	return 0;
}
