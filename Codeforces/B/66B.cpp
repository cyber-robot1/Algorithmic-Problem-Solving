/*
Author: Karim Tarek Ibrahim
Problem name: Petya and Countryside
Problem link: https://codeforces.com/problemset/problem/66/B
Date: 17/11/2023
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int arr[1001];
int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	vector<int> v;
	int c = 0, tmp = 0;
	for (int i = 0; i < n; i++)
	{
		c++;
		tmp = arr[i];
		if (i == 0)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] <= tmp)
				{
					c++;
					tmp = arr[j];
				}
				else
					break;
			}
		}
		else if (i == n - 1)
		{
			for (int j = n - 2; j >= 0; j--)
			{
				if (arr[j] <= tmp)
				{
					c++;
					tmp = arr[j];
				}
				else
					break;
			}
		}
		else
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (arr[j] <= tmp)
				{
					c++;
					tmp = arr[j];  
				}
				else
					break;
			} 
			tmp = arr[i]; 
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] <= tmp)
				{
					c++; 
					tmp = arr[j]; 
				}
				else
					break;
			}
		}
		v.push_back(c);
		c = 0;
		tmp = 0;
	}
	cout << *max_element(v.begin(), v.end());
 
	return 0;
}
