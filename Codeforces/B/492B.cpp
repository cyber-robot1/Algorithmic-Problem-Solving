/*
Author: Karim Tarek Ibrahim
Problem name: Vanya and Lanterns
Problem link: https://codeforces.com/problemset/problem/492/B
Date: 23/11/2023
*/

#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
 
int arr[1001];
int main()
{
	int n, l; cin >> n >> l;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	int mx = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
			break;
		else
			mx = max(mx, abs(arr[i] - arr[i + 1]));
	}
	double m2 = double(mx) / 2;
 
	if (arr[0] == 0 && arr[n - 1] == l)
		cout << fixed << setprecision(9) << m2;
 
	else if ((arr[0] == 0 && arr[n - 1] != l) || (arr[0] != 0 && arr[n - 1] == l))
	{
		if (arr[0] == 0)
		{
			double m1 = abs(arr[n - 1] - l);
			cout << fixed << setprecision(9) << max(m1, m2);
		}
		else
		{
			double m1 = arr[0];
			cout << fixed << setprecision(9) << max(m1, m2);
		}
	}
 
	else if (arr[0] != 0 && arr[n - 1] != l)
	{
		double m1 = arr[0];
		double m3 = abs(arr[n - 1] - l);
		cout << fixed << setprecision(9) << max(m2, max(m1, m3));
	}
 
	return 0;
}
