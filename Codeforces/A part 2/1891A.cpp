/*
Author: Karim Tarek Ibrahim
Problem name: Sorting with Twos
Problem link: https://codeforces.com/problemset/problem/1891/A
Date: 30/10/2023
*/

#include <iostream>
using namespace std;
 
int arr[21];
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
			cin >> arr[i];
 
		bool flag = true;
		for (int i = 1; i <= n; i++)
		{
			if (arr[i] < arr[i - 1])
			{
				int x = i - 1;
				if (x == 1 || x == 2 || x == 4 || x == 8 || x == 16)
					flag = true;
				else
				{
					flag = false;
					break;
				}
			}
		}
		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
 
	return 0;
}
