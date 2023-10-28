/*
Author: Karim Tarek Ibrahim
Problem name: Doremy's Paint 3
Problem link: https://codeforces.com/problemset/problem/1890/A
Date: 28/10/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
bool isEqual(int n, int arr[])
{
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
			break;
		else
		{
			if (arr[i] != arr[i + 1])
			{
				flag = false;
				break;
			}
		}
	}
	return flag;
}
 
int arr[101];
 
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, c1 = 0, c2 = 0;
		int freq[100001] = { 0 };
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			freq[arr[i]]++;
		}
		
		if (n == 2 || isEqual(n, arr))
			cout << "Yes" << endl;
		else
		{
			int mn = *min_element(arr, arr + n);
			int mx = *max_element(arr, arr + n);
			c2 = abs(freq[mx] - freq[mn]);
			for (int i = mn; i <= mx; i++)
			{
				if (freq[i] != 0)
					c1++;
			}
			if (c1 == 2 && (c2 == 1 || c2 == 0))
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
 
	return 0;
}
