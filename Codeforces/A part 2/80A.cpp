/*
Author: Karim Tarek Ibrahim
Problem name: Panoramix's Prediction
Problem link: https://codeforces.com/problemset/problem/80/A
Date: 25/10/2023
*/

#include <iostream>
using namespace std;
 
bool isPrime(int n)
{
	bool flag = true;
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}
 
int main()
{
	int n, m;
	cin >> n >> m;
	n++;
	while (true)
	{
		if (isPrime(n))
		{
			if (n == m)
			{
				cout << "YES";
				break;
			}
			else
			{
				cout << "NO";
				break;
			}
		}
		n++;
	}
 
	return 0;
}
