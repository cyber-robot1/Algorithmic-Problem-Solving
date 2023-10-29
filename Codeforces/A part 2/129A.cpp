/*
Author: Karim Tarek Ibrahim
Problem name: Cookies
Problem link: https://codeforces.com/problemset/problem/129/A
Date: 29/10/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[101];
int main()
{
	int n, sum = 0, c = 0; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++)
	{
		sum -= arr[i];
		if (sum % 2 == 0)
			c++;
		sum += arr[i];
	}
	cout << c;
 
	return 0;
}

