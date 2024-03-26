/*
Author: Karim Tarek Ibrahim
Problem name: Display Size
Problem link: https://codeforces.com/problemset/problem/747/A
Date: 27/3/2024
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n; cin >> n;
	int a = 0, b = 0, mnA = 1, mnB = n;
	int mn = abs(mnA - mnB);
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			a = i;
			b = n / i;
			if (a > b)
				break;
			if (abs(a - b) <= mn)
			{
				mn = abs(a - b);
				mnA = a;
				mnB = b;
			}
		}
	}
	cout << mnA << " " << mnB;
 
	return 0;
}
