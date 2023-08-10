/*
Author: Karim Tarek Ibrahim
Problem name: Bus to Udayland
Problem link: https://codeforces.com/problemset/problem/711/A
Date: 10/8/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
char arr[1001][5];
int main()
{
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
			cin >> arr[i][j];
	}
	
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == 'O')
			{
				if (j == 4)
					continue;
				else
				{
					if (arr[i][j + 1] == 'O')
					{
						arr[i][j] = '+';
						arr[i][j + 1] = '+';
						flag = true;
						break;
					}
				}
			}
		}
		if (flag)
			break;
	}
	
	if (flag)
	{
		cout << "YES" << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 5; j++)
				cout << arr[i][j];
			cout << endl;
		}
	}
	else
		cout << "NO";
 
 
	return 0;
}
