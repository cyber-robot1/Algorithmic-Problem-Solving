/*
Author: Karim Tarek Ibrahim
Problem name: Flag
Problem link: https://codeforces.com/problemset/problem/16/A
Date: 10/8/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
char arr[101][101];
int main()
{
	
	int n, m;
	char k;
	bool f1 = true, f2 = true, tmp = true;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	}
	
	// checking if all elements in a same row are equal or not.
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (j == m - 1)
				continue;
			else
			{
				if (arr[i][j] == arr[i][j + 1])
				{
					f1 = true;
					continue;
				}
				else
				{
					f1 = false;
					break;
				}
			}
		}
		if (!f1)
			break;
	}
	
	// checking if there're two adjacent rows are equal or not.
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (tmp)
			{
				k = arr[0][0];
				tmp = false;
				break;
			}
			else
			{
				if (arr[i][0] == k)
				{
					f2 = false;
					break;
				}
				else
				{
					k = arr[i][0];
					break;
				}
			}
		}
		if (!f2)
			break;
	}
 
	if (f1 && f2)
		cout << "YES";
	else
		cout << "NO";
 
 
	return 0;
}
