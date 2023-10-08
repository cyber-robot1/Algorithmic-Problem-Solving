/*
Author: Karim Tarek Ibrahim
Problem name: Multiply by 2, divide by 6
Problem link: https://codeforces.com/problemset/problem/1374/B
Date: 8/10/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, c = 0;
		cin >> n;
		bool flag = true, tmp = true, final = false;
		while (true)
		{
			if (n == 1)
			{
				final = true;
				break;
			}
			else
			{
				if (n % 6 == 0)
				{
					n /= 6;
					c++;
					tmp = true;
				}
 
				else
				{
					if (tmp)
					{
						n *= 2;
						c++;
						tmp = false;
					}
					else
						break;
				}
			}
		}
		if (final)
			cout << c << endl;
		else
			cout << -1 << endl;
	}
 
	return 0;
}
