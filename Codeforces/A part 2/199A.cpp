/*
Author: Karim Tarek Ibrahim
Problem name: Hexadecimal's theorem
Problem link: https://codeforces.com/problemset/problem/199/A
Date: 15/10/2023
*/

#include <iostream>
using namespace std;
 
int fib(long long int n)
{
	int a = 0, b = 1, c, i;
	if (n == 0)
		return a;
	for (i = 2; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}
 
int main()
{
	
	long long int n;
	int index = 0;
	cin >> n;
	if (n == 0)
		cout << 0 << " " << 0 << " " << 0;
	else if (n == 1)
		cout << 1 << " " << 0 << " " << 0;
	else
	{
		for (int i = 0; i <= 45; i++)
		{
			if (fib(i) == n)
			{
				index = i;
				break;
			}
		}
		cout << fib(index - 1) << " " << fib(index - 2) << " " << fib(0);
	}
 
	return 0;
}

