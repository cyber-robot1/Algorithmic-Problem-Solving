/*
Author: Karim Tarek Ibrahim
Problem name: Left-handers, Right-handers and Ambidexters
Problem link: https://codeforces.com/problemset/problem/950/A
Date: 25/10/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	int l, r, a;
	cin >> l >> r >> a;
	if (l == r)
		cout << l + r + (a / 2) + (a / 2);
	else
	{
		int mn = min(l, r), mx = max(l, r);
		if (a >= mx-mn)
		{
			a -= (mx - mn);
			mn += (mx - mn);
			a /= 2;
			cout << mn + mx + (a * 2);
		}
		else
		{
			mn += a;
			cout << mn * 2;
		}
	}
	
	return 0;
}
