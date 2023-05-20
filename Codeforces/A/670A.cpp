/*
Author: Karim Tarek Ibrahim
Problem name: Holidays
Problem link: https://codeforces.com/problemset/problem/670/A
Date: 20/5/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	
	int n, mn = 0, mx = 0;
	int weeks = 0, temp = 0, restDays = 0, daysOFF = 0;
	cin >> n;
 
	if (n < 7)
	{
		if (n == 1)
		{
			mn = 0;
			mx = 1;
		}
		else if (n == 6)
		{
			mn = 1;
			mx = 2;
		}
		else
		{
			mn = 0;
			mx = 2;
		}
	}
	else if (n % 7 == 0)
	{
		mn = (n / 7) * 2;
		mx = (n / 7) * 2;
	}
	else if (n > 7 && n % 7 != 0)
	{
		weeks = n / 7; 
		temp = weeks * 7;
		restDays = n - temp;
 
		if (restDays == 1)
		{
			mn = (n / 7) * 2;
			mx = mn + 1;
		}
		else if (restDays == 6)
		{
			daysOFF = 2;
			mn = (n / 7) * 2;
			mx = mn + 2;
			mn += 1;
		}
		else
		{
			mn = (n / 7) * 2;
			mx = mn + 2;
		}
	}
	
	cout << mn << " " << mx;
 
 
	
	return 0;
}
