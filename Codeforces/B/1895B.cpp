/*
Author: Karim Tarek Ibrahim
Problem name: Points and Minimum Distance
Problem link: https://codeforces.com/problemset/problem/1895/B
Date: 3/11/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[201];
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int x[101] = { 0 }, y[101] = { 0 };
		for (int i = 1; i <= n * 2; i++)
			cin >> arr[i];
		sort(arr, arr + ((n * 2) + 1));
		for (int i = n * 2, j = 1; i > n; i--, j++)
			x[j] = arr[i];
		for (int i = n, j = 1; i >= 1; i--, j++)
			y[j] = arr[i];
		int sum = 0;
		for (int i = 1; i <= n; i++)
		{
			if (i == n)
				break;
			else
				sum += abs(x[i] - x[i + 1]) + abs(y[i] - y[i + 1]);
		}
		cout << sum << endl;
		for (int i = 1; i <= n; i++)
			cout << x[i] << " " << y[i] << endl;
	}
 
	return 0;
}
