/*
Author: Karim Tarek Ibrahim
Problem name: Timofey and cubes
Problem link: https://codeforces.com/problemset/problem/764/B
Date: 8/10/2023
*/

#include <iostream>
using namespace std;
 
int arr[200001];
int main()
{
	
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
 
	for (int i = 1; i <= n / 2; i++)
	{
		if (i % 2 != 0)
			swap(arr[i], arr[n - i + 1]);
	}
	
	for (int i = 1; i <= n; i++)
		cout << arr[i] << " ";
 
	return 0;
}

