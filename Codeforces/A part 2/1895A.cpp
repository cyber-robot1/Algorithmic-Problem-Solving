/*
Author: Karim Tarek Ibrahim
Problem name: Treasure Chest
Problem link: https://codeforces.com/problemset/problem/1895/A
Date: 3/11/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int x, y, k;
		cin >> x >> y >> k;
		if (y < x)
			cout << x << endl;
		else
		{
			if ((x + k) >= y)
				cout << y << endl;
			else
			{
				x = x + k;
				x = x + (2 * (abs(x - y)));
				cout << x << endl;
			}
		}
	}
 
	return 0;
}

