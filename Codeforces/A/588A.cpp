/*
Author: Karim Tarek Ibrahim
Problem name: Duff and Meat
Problem link: https://codeforces.com/problemset/problem/588/A
Date: 3/6/2023
*/

#include <iostream>
using namespace std;
 
int a[100001], p[100001];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> p[i];
 
	bool flag = true;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (flag)
		{
			sum = a[i] * p[i];
			for (int j = i + 1; j <= n; j++)
			{
				if ((a[j] * p[j]) > (a[j] * p[i]))
				{
					sum = sum + (a[j] * p[i]);
					a[j] = -1;
					p[j] = -1;
				}
				else
					break;
			}
			flag = false;
		}
		else
		{
			if (a[i] == -1 && p[i] == -1)
				continue;
			else
			{
				sum = sum + a[i] * p[i];
				for (int j = i + 1; j <= n; j++)
				{
					if ((a[j] * p[j]) > (a[j] * p[i]))
					{
						sum = sum + (a[j] * p[i]);
						a[j] = -1;
						p[j] = -1;
					}
					else
						break;
				}
			}
		}
	}
	
	cout << sum;
 
	return 0;
}
