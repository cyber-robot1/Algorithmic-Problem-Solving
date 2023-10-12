/*
Author: Karim Tarek Ibrahim
Problem name: Orac and Factors
Problem link: https://codeforces.com/problemset/problem/1350/A
Date: 12/10/2023
*/

#include <iostream>
using namespace std;
 
int divisor(int num)
{
	for (int i = 2; i <= num; i++)
	{
		if (num % i == 0)
			return i;
	}
}
 
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		long long int k;
		cin >> n >> k;
		int d = divisor(n);
		d = d + n;
		k--;
		long long int res = 2 * k;
		res = res + d;
		cout << res << endl;
	}
 
	return 0;
}

