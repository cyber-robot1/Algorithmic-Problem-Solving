/*
Author: Karim Tarek Ibrahim
Problem name: Opponents
Problem link: https://codeforces.com/problemset/problem/688/A
Date: 12/10/2023
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
 
char arr[100];
int main()
{
	int n, d;
	vector<int> v;
	cin >> n >> d;
	int c = 0;
	while (d--)
	{
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		if (arr[0] == '0')
		{
			if (d == 0)
			{
				c++;
				v.push_back(c);
			}
			else
				c++;
		}
		else
		{
			if (c != 0 || d == 0)
			{
				v.push_back(c);
				c = 0;
			}
		}
	}
	if (v.empty())
		cout << 0;
	else
		cout << *max_element(v.begin(), v.end());
 
	return 0;
}
