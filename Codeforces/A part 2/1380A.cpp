/*
Author: Karim Tarek Ibrahim
Problem name: Three Indices
Problem link: https://codeforces.com/problemset/problem/1380/A
Date: 8/10/2023
*/

#include <iostream>
using namespace std;
 
int arr[1001];
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
			cin >> arr[i];
 
		bool flag = false;
		for (int i = 1; i <= n; i++)
		{
			if (i == 1 || i == n)
				continue;
			else
			{
				if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
				{
					flag = true;
					cout << "YES" << endl;
					cout << i - 1 << " " << i << " " << i + 1 << endl;
					break;
				}
			}
		}
		if (!flag)
			cout << "NO" << endl;
	}
 
	return 0;
}
