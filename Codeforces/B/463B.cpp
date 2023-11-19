/*
Author: Karim Tarek Ibrahim
Problem name: Caisa and Pylons
Problem link: https://codeforces.com/problemset/problem/463/B
Date: 19/11/2023
*/

#include <iostream>
using namespace std;
 
int arr[100001];
int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
 
	int money = arr[0], energy = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
			break;
		else
		{
			if (arr[i] - arr[i + 1] >= 0)
				energy += (arr[i] - arr[i + 1]);
			else
			{
				if (abs(arr[i] - arr[i + 1]) > energy)
				{
					int x = arr[i] + energy;
					energy = 0;
					money += abs(x - arr[i + 1]);
				}
				else
					energy -= abs(arr[i] - arr[i + 1]);
			}
		}
	}
	cout << money;
 
	return 0;
}
