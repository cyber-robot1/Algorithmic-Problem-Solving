/*
Author: Karim Tarek Ibrahim
Problem name: Coins
Problem link: https://codeforces.com/problemset/problem/47/B
Date: 19/11/2023
*/

#include <iostream>
using namespace std;
 
char arr[4][4];
int main()
{
	char A = 'A', B = 'B', C = 'C';
	int gA = 0, sA = 0, gB = 0, sB = 0, gC = 0, sC = 0;
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
			cin >> arr[i][j];
	}
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			if (j == 2)
				continue;
			else
			{
				if (arr[i][j] == 'A')
				{
					if (j == 1)
					{
						if (arr[i][2] == '>')
							gA++;
						else
							sA++;
					}
					else
					{
						if (arr[i][2] == '>')
							sA++;
						else
							gA++;
					}
				}
				else if (arr[i][j] == 'B')
				{
					if (j == 1)
					{
						if (arr[i][2] == '>')
							gB++;
						else
							sB++;
					}
					else
					{
						if (arr[i][2] == '>')
							sB++;
						else
							gB++;
					}
				}
				else
				{
					if (j == 1)
					{
						if (arr[i][2] == '>')
							gC++;
						else
							sC++;
					}
					else
					{
						if (arr[i][2] == '>')
							sC++;
						else
							gC++;
					}
				}
			}
		}
	}
	int flag = 0;
	if (gA == sA)
		flag++;
	if (gB == sB)
		flag++;
	if (gC == sC)
		flag++;
	if (flag > 1)
		cout << "Impossible";
	else
	{
		char mx, mn, md;
		if (gA == 2)
		{
			mx = A;
			if (gB == 1)
			{
				md = B;
				mn = C;
			}
			else
			{
				md = C;
				mn = B;
			}
		}
		else if (gB == 2)
		{
			mx = B;
			if (gA == 1)
			{
				md = A;
				mn = C;
			}
			else
			{
				md = C;
				mn = A;
			}
		}
		else
		{
			mx = C;
			if (gA == 1)
			{
				md = A;
				mn = B;
			}
			else
			{
				md = B;
				mn = A;
			}
		}
		cout << mn << md << mx;
	}
 
	return 0;
}
