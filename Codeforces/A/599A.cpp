/*
Author: Karim Tarek Ibrahim
Problem Name: Patrick and Shopping 
Problem Link: https://codeforces.com/problemset/problem/599/A
Date: 22/7/2022
*/

#include <iostream>
using namespace std;

int Max(int a, int b, int c)
{
	int mx = 0;
	if (a >= b && a >= c)
		mx = a;
	else if (b >= a && b >= c)
		mx = b;
	else if (c >= a && c >= b)
		mx = c;
	return mx;
}

int Min(int a, int b, int c)
{
	int mn = 0;
	if (a <= b && a <= c)
		mn = a;
	else if (b <= a && b <= c)
		mn = b;
	else if (c <= a && c <= b)
		mn = c;
	return mn;
}

int Mid(int a, int b, int c)
{
	int md = 0;
	if (b <= a && a <= c || c <= a && a <= b)
		md = a;
	else if (a <= b && b <= c || c <= b && b <= a)
		md = b;
	else
		md = c;
	return md;
}

int main()
{
	
  long long d1, d2, d3, md = 0, mn = 0, mx = 0;
	cin >> d1 >> d2 >> d3;
	mn = Min(d1, d2, d3);
	md = Mid(d1, d2, d3);
	mx = Max(d1, d2, d3);
	if (mx > (md + mn))
		cout << (md * 2) + (mn * 2);
	else if (mx <= (md + mn))
		cout << mx + md + mn;
		
	
	return 0;
}
