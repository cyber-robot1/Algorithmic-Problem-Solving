/*
Author: Karim Tarek Ibrahim
Problem name: Distance and Axis
Problem link: https://codeforces.com/problemset/problem/1401/A
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
		int A, k, steps = 0;
		cin >> A >> k;
		if (A < k)
			steps = k - A;
		else if (A > k)
		{
			if ((A - k) % 2 == 0)
				steps = 0;
			else
				steps = 1;
		}
		else
			steps = 0;
		cout << steps << endl;
	}
 
	return 0;
}
