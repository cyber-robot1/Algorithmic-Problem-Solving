/*
Author: Karim Tarek Ibrahim
Problem name: Bad Prices
Problem link: https://codeforces.com/problemset/problem/1213/B
Date: 18/7/2023
*/

#include <iostream>
using namespace std;
 
int arr[150001];
int main()
{
 
	int n, t, bad = 0, mn = 0;
	cin >> t;
	while (t--)
	{
		bool flag = true;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
 
		for (int i = n - 1; i >= 0; i--)
		{
 
			if (flag)
			{
				mn = arr[i];
				flag = false;
			}
			else
			{
				if (arr[i] < mn)
					mn = arr[i];
 
				else if (arr[i] == mn)
					continue;
 
				else
					bad++;
			}
		}
 
		cout << bad << endl;
		bad = 0;
	}
 
	return 0;
}
