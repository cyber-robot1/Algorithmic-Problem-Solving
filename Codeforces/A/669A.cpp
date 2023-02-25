/*
Author: Karim Tarek Ibrahim
Problem Name: Little Artem and Presents
Problem Link: https://codeforces.com/problemset/problem/669/A
Date: 5/9/2022
*/

#include <iostream>
using namespace std;
 
int main()
{
	
	long long n;
	cin >> n;
	long long ans = 2 * (n / 3);
	if (n % 3)
		ans++;
	cout << ans;
 
	return 0;
}
