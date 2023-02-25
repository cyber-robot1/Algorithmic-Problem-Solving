/*
Author: Karim Tarek Ibrahim
Problem name: Bachgold Problem
Problem link: https://codeforces.com/problemset/problem/749/A
Date: 9/2/2022
*/

#include <iostream>
using namespace std;

int main()
{
	
	int n, k = 0;
	cin >> n;
	if (n % 2 == 0)               // n is even 
	{
		k = n / 2;
		cout << k << endl;
		for (int i = 1; i <= k; i++)
		{
			cout << 2 << " ";
		}
	}
	else                          // n is odd
	{
		k = n / 2;
		cout << k << endl;
		for (int i = 1; i <= ((n / 2) - 1); i++)
		{
			cout << 2 << " ";
		}
		for (int i = 1; i <= k - ((n / 2) - 1); i++)
		{
			cout << 3 << " ";
		}
	}

	return 0;
}
