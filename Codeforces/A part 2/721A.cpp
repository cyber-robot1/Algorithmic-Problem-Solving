/*
Author: Karim Tarek Ibrahim
Problem name: One-dimensional Japanese Crossword
Problem link: https://codeforces.com/problemset/problem/721/A
Date: 10/8/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
char str[101];
int main()
{
	
	int n, consecutive_black = 0, black = 0;
	bool flag = true;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> str[i];
 
	// getting No. of consecutive black in the given string.
	for (int i = 0; i < n; i++)
	{
		if (str[i] == 'B')
		{
			if (str[i + 1] == 'B')
				continue;
			else
				consecutive_black++;
		}
	}
	cout << consecutive_black << endl;
 
	// getting size of each consecutive black group.
	for (int i = 0; i < n; i++)
	{
		if (str[i] == 'B')
		{
			if (flag)
			{
				black++;
				flag = false;
			}
			if (str[i + 1] == 'B')
			{
				black++;
				continue;
			}
			else
			{
				cout << black << " ";
				black = 0;
				flag = true;
			}
		}
	}
 
	return 0;
}
