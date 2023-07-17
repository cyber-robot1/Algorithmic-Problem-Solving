/*
Author: Karim Tarek Ibrahim
Problem name: Next Round
Problem link: https://codeforces.com/problemset/problem/158/A
Date: 18/7/2023
*/

#include <iostream>
using namespace std;
 
int arr[51];
int main()
{
	
	int n, k, c;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	
	if (arr[k] == 0)
	{
		c = 0;
		for (int i = 1; i <= n; i++)
		{
			if (i == k)
				continue;
			else
			{
				if (arr[i] == 0)
					continue;
				else
				{
					if (arr[i] >= arr[k])
						c++;
				}
			}
		}
	}
	else
	{
		c = 1;
		for (int i = 1; i <= n; i++)
		{
			if (i == k)
				continue;
			else
			{
				if (arr[i] >= arr[k])
					c++;
			}
		}
	}
 
	cout << c;
 
	return 0;
}
