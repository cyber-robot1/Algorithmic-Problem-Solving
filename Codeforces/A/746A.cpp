/*
Author: Karim Tarek Ibrahim
Problem Name: Compote 
Probblem Link: https://codeforces.com/problemset/problem/746/A
Date: 25/8/2022
*/

#include <iostream>
using namespace std;


int main()
{
	int a, b, c, flag = 0;
	cin >> a >> b >> c;
	if (!(a >= 1 && b >= 2 && c >= 4))
		cout << 0;
	else
	{
		while (a >= 1 && b >= 2 && c >= 4)
		{
			a -= 1;
			b -= 2;
			c -= 4;
			flag++;
		}
		cout << 7 * flag;
	}
	
		
	return 0;
}
