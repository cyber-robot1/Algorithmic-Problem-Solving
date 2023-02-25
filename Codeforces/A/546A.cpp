/*
Author: Karim Tarek Ibrahim
Problem Name: Soldier and Bananas
Problem Link: https://codeforces.com/problemset/problem/546/A
Date: 25/7/2022
*/

#include <iostream>
using namespace std;
 
int main()
{
	int k, w;                                  // k is cost of first banana, w is number of banana the soldier wants.
	long long n, total_price = 0;             // n is the number of dollars the soldier has.
	cin >> k >> n >> w;
	for (int i = 1; i <= w; i++)
	{
		total_price = total_price + (k * i);
	}
	if (total_price <= n)
		cout << 0 << endl;
	else
		cout << total_price - n;
 
    return 0;
}
