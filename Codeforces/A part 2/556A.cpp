/*
Author: Karim Tarek Ibrahim
Problem name: Case of the Zeros and Ones
Problem link: https://codeforces.com/problemset/problem/556/A
Date: 2/11/2023
*/

#include <iostream>
#include <deque>
using namespace std;
 
int main()
{
	int n; cin >> n;
	deque<char> d(n);
	for (int i = 0; i < n; i++)
		cin >> d[i];
 
	int zeros = 0, ones = 0;
	for (int i = 0; i < n; i++)
	{
		if (d[i] == '1')
			ones++;
		else
			zeros++;
	}
	cout << abs(zeros - ones);
 
	return 0;
}
