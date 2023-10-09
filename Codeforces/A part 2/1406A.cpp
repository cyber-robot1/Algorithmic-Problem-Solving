/*
Author: Karim Tarek Ibrahim
Problem name: Subset Mex
Problem link: https://codeforces.com/problemset/problem/1406/A
Date: 9/10/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		int arr[101] = { 0 }, freq[101] = { 0 };
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		for (int i = 0; i < n; i++)
			freq[arr[i]]++;
		int mn = *min_element(arr, arr + n);
		int mx = *max_element(arr, arr + n);
 
		if (arr[0] != 0)
			cout << 0 << endl;
		else
		{
			int A = 0, B = 0;
			bool flag = true;
			for (int i = mn; i <= mx; i++)
			{
				if (freq[i] == 0)
				{
					A = i;
					flag = false;
					break;
				}
				else
				{
					freq[i]--;
				}
			}
			if (flag)
				A = mx + 1;
 
			flag = true;
			for (int i = mn; i <= mx; i++)
			{
				if (freq[i] == 0)
				{
					B = i;
					flag = false;
					break;
				}
				else
					freq[i]--;
			}
			if (flag)
				B = mx + 1;
 
			cout << A + B << endl;
		}
	}
 
	return 0;
}
