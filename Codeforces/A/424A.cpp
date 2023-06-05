/*
Author: Karim Tarek Ibrahim
Problem name: Squats
Problem link: https://codeforces.com/problemset/problem/424/A
Date: 5/6/2023
*/

#include <iostream>
using namespace std;
 
char arr[201];
int main()
{
 
	int n, res = 0, temp;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
 
	int len = n / 2;
	
	char Max, Min;
	int x = 0, X = 0, mn = 0, mx = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 'x')
			x++;
 
		else if (arr[i] == 'X')
			X++;
	}
 
	if (x == X)
	{
		cout << 0 << endl;
		for (int i = 0; i < n; i++)
			cout << arr[i];
	}
	else
	{
		if (x > X)   //mx = x,  mn = X
		{
			mx = x;
			mn = X;
			res = len - mn;
			temp = res;
			Max = 'x';
			Min = 'X';
		}
 
		else if (x < X)   //mx = X,  mn = x
		{
			mx = X;
			mn = x;
			res = len - mn;
			temp = res;
			Max = 'X';
			Min = 'x';
		}
 
		int i = 0;
		while (true)
		{
			if (temp)
			{
				if (arr[i] == Max)
				{
					arr[i] = Min;
					temp--;
				}
			}
			else
				break;
 
			i++;
		}
 
		cout << res << endl;
		for (int i = 0; i < n; i++)
			cout << arr[i];
	}
 
	return 0;
}
