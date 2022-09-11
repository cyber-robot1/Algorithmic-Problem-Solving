/*
Author: Karim Tarek Ibrahim
Problem name: Magnets
Problem link: https://codeforces.com/problemset/problem/344/A
Date: 9/11/2022
*/

#include <iostream>
using namespace std;

int main()
{
	
	int n, x, first_digit = 0, flag = 1, c = 0;
	cin >> n;
	while (n--)
	{
		cin >> x;

		if (first_digit == x / 10)
		{
			if (flag)
			{
				c++;
				flag = 0;
				first_digit = x / 10;
			}
			continue;
		}
		else
		{
			c++;
			flag = 0;
			first_digit = x / 10;
		}
		
	}
	cout << c;
	
	return 0;
}


