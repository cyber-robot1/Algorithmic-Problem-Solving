/*
Author: Karim Tarek Ibrahim
Problem name: Stones on the Table
Problem link: https://codeforces.com/problemset/problem/266/A
Date: 5/6/2023
*/

#include <iostream>
using namespace std;
 
char arr[51];
int main()
{
 
	int n, res = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
 
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 'R')
		{
			if (arr[i + 1] == 'R')
				res++;
		}
		else if (arr[i] == 'G')
		{
			if (arr[i + 1] == 'G')
				res++;
		}
		else if (arr[i] == 'B')
		{
			if (arr[i + 1] == 'B')
				res++;
		}
	}
 
	cout << res;
 
 
	return 0;
}
