/*
Author: Karim Tarek Ibrahim
Problem name: Coder
Problem link: https://codeforces.com/problemset/problem/384/A
Date: 10/8/2023
*/

#include <iostream>
using namespace std;
 
char arr[1001][1001];
int main()
{
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 && j == 0)
			{
				arr[0][0] = 'C';
				arr[1][0] = '.';
				arr[0][1] = '.';
			}
			else
			{
				if (arr[i][j] == '.')
					continue;
				else
				{
					arr[i][j] = 'C';
					arr[i + 1][j] = '.';
					arr[i][j + 1] = '.';
				}
			}
		}
	}
 
	int C = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == 'C')
				C++;
		}
	}
	
	cout << C << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << arr[i][j];
 
		cout << endl;
	}
 
	return 0;
}
