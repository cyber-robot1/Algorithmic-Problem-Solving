/*
Author: Karim Tarek Ibrahim
Problem name: Reconnaissance 2
Problem link: https://codeforces.com/problemset/problem/34/A
Date: 26/10/2023
*/


#include <iostream>
using namespace std;
 
int arr[101];
int main()
{
	int n, mn = 900, x = 0, y = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	
	for (int i = 1, j = i + 1; i <= n; i++, j++)
	{
		if (i == n)
			j = 1;
 
		if (abs(arr[i] - arr[j]) <= mn)
		{
			mn = abs(arr[i] - arr[j]);
			x = i;
			y = j;
		}
	}
	
	cout << x << " " << y;
 
	return 0;
}

