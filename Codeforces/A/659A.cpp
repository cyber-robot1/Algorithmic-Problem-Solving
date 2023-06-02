/*
Author: Karim Tarek Ibrahim
Problem name: Round House
Problem link: https://codeforces.com/problemset/problem/659/A
Date: 2/6/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	
	int n, a, b;
	cin >> n >> a >> b;
 
	if (b > 0)
	{
		for (int i = 1; i <= b; i++)
		{
			if (a == n)
				a = 1;
			else
				a++;
 
		}
	}
	else
	{
		b = abs(b);
		for (int i = 1; i <= b; i++)
		{
			if (a == 1)
				a = n;
			else
				a--;
		}
	}
	cout << a;
 
	return 0;
}
