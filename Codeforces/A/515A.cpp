/*
Author: Karim Tarek Ibrahim
Problem name: Drazil and Date
Problem link: https://codeforces.com/problemset/problem/515/A
Date: 2/6/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	int a, b, s, c = 0;
	cin >> a >> b >> s;
	c = abs(a) + abs(b);
	if (c == s)
		cout << "YES";
 
	else if (c > s)
		cout << "NO";
 
	else
	{
		s = s - c;
		if (s % 2 == 0)
			cout << "YES";
		else
			cout << "NO";
	}
 
	return 0;
}
