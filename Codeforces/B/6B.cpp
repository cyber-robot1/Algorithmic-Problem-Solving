/*
Author: Karim Tarek Ibrahim
Problem name: President's Office
Problem link: https://codeforces.com/problemset/problem/6/B
Date: 24/11/2023
*/

#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
 
bool isvalidPos(int i, int j, int rows, int columns)
{
	if (i<0 || j<0 || i>rows - 1 || j>columns - 1)
		return false;
	return true;
}
 
char arr[101][101];
int main()
{
	int n, m; cin >> n >> m;
	char c; cin >> c;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	}
 
	set<char> s;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == c)
			{
				if (isvalidPos(i - 1, j, n, m))
				{
					if (arr[i - 1][j] != c && arr[i - 1][j] != '.')
						s.insert(arr[i - 1][j]);
				}
				if (isvalidPos(i + 1, j, n, m))
				{
					if (arr[i + 1][j] != c && arr[i + 1][j] != '.')
						s.insert(arr[i + 1][j]);
				}
				if (isvalidPos(i, j + 1, n, m))
				{
					if (arr[i][j + 1] != c && arr[i][j + 1] != '.')
						s.insert(arr[i][j + 1]);
				}
				if (isvalidPos(i, j - 1, n, m))
				{
					if (arr[i][j - 1] != c && arr[i][j - 1] != '.')
						s.insert(arr[i][j - 1]);
				}
			}
		}
	}
	cout << s.size();
 
	return 0;
}
