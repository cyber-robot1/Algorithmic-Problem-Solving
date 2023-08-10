/*
Author: Karim Tarek Ibrahim
Problem name: Triangular numbers
Problem link: https://codeforces.com/problemset/problem/47/A
Date: 10/8/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	
	int n, c = 1;
	bool flag = false;
	cin >> n;
	for (int i = 1; i <= n; i = i + c)
	{
		if (n == i)
		{
			flag = true;
			break;
		}
		c++;
	}
 
	if (flag)
		cout << "YES";
	else
		cout << "NO";
 
	return 0;
}
