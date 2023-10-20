/*
Author: Karim Tarek Ibrahim
Problem name: Olesya and Rodion
Problem link: https://codeforces.com/problemset/problem/584/A
Date: 20/10/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	int n, t;
	cin >> n >> t;
 
	if (n == 1)
	{
		bool flag = false;
		for (int i = 1; i <= 9; i++)
		{
			if (i % t == 0)
			{
				cout << i;
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << -1;
	}
 
	else
	{
		int x = 0;
		for (int i = 10; i <= 20; i++)
		{
			if (i % t == 0)
			{
				x = i;
				break;
			}
		}
		string str = to_string(x);
		n -= str.size();
		while (n--)
			str += '0';
		cout << str;
	}
 
	return 0;
}

