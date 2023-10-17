/*
Author: Karim Tarek Ibrahim
Problem name: Nicholas and Permutation
Problem link: https://codeforces.com/problemset/problem/676/A
Date: 17/10/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[101];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
 
	int mx = distance(arr, max_element(arr, arr + n));
	int mn = distance(arr, min_element(arr, arr + n));
	mn++;
	mx++;
	
	if (mn == 1 || mx == 1 || mn == n || mx == n)
		cout << n - 1;
	else
	{
		int x1 = 0, x2 = 0, x3 = 0, x4 = 0;
		x1 = 1;
		x1 = abs(x1 - mn);
		x2 = n;
		x2 = abs(x2 - mn);
		x3 = 1;
		x3 = abs(x3 - mx);
		x4 = n;
		x4 = abs(x4 - mx);
		cout << max(max(x1, x2), max(x3, x4));
	}
 
	return 0;
}
