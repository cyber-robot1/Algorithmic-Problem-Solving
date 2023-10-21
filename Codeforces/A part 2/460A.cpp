/*
Author: Karim Tarek Ibrahim
Problem name: Vasya and Socks
Problem link: https://codeforces.com/problemset/problem/460/A
Date: 21/10/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	int n, m;
	cin >> n >> m;
	int res = n / m;
	while (res != 0)
	{
		n++;
		if (n % m != 0)
			res--;
	}
	cout << n;
 
	return 0;
}


