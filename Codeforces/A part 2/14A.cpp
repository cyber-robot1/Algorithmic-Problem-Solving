/*
Author: Karim Tarek Ibrahim
Problem name: Letter
Problem link: https://codeforces.com/problemset/problem/14/A
Date: 28/10/2023
*/

#include <iostream>
using namespace std;
 
char arr[51][51];
int main()
{
	int n, m;
	int ri = 0, rf = 0, ci = 0, cf = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			cin >> arr[i][j];
	}
 
	// ci
	bool fci = false;
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[j][i] == '*')
			{
				ci = i;
				fci = true;
				break;
			}
		}
		if (fci)
			break;
	}
	
	// cf
	bool fcf = false;
	for (int i = m; i >= 1; i--)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[j][i] == '*')
			{
				cf = i;
				fcf = true;
				break;
			}
		}
		if (fcf)
			break;
	}
	
	// ri
	bool fri = false;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (arr[i][j] == '*')
			{
				ri = i;
				fri = true;
				break;
			}
		}
		if (fri)
			break;
	}
 
	// rf
	bool frf = false;
	for (int i = n; i >= 1; i--)
	{
		for (int j = 1; j <= m; j++)
		{
			if (arr[i][j] == '*')
			{
				rf = i;
				frf = true;
				break;
			}
		}
		if (frf)
			break;
	}
	
	for (int i = ri; i <= rf; i++)
	{
		for (int j = ci; j <= cf; j++)
			cout << arr[i][j];
		cout << endl;
	}
 
	return 0;
}

