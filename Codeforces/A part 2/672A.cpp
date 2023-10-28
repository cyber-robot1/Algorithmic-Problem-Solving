/*
Author: Karim Tarek Ibrahim
Problem name: Summer Camp
Problem link: https://codeforces.com/problemset/problem/672/A
Date: 28/10/2023
*/

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	string str;
	for (int i = 1; i <= 1000; i++)
		str = str + to_string(i);
 
	int n; cin >> n;
	cout << str[n - 1];
 
	return 0;
}
