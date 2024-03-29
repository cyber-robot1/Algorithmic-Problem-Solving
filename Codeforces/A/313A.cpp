/*
Author: Karim Tarek Ibrahim
Problem name: Ilya and Bank Account
Problem link: https://codeforces.com/problemset/problem/313/A
Date: 6/9/2022
*/

#include <iostream>
using namespace std;

long long Max(long long a, long long b, long long c)
{
	long long mx = 0;
	if (a >= b && a >= c)
		mx = a;
	else if (b >= a && b >= c)
		mx = b;
	else if (c >= a && c >= b)
		mx = c;
	return mx;
}

int main()
{
	
	long long n, a, b;
	cin >> n;
	a = n / 10;
	b = (n / 100) * 10 + (n % 10);
	cout << Max(a, b, n);
	
	return 0;
}
