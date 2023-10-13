/*
Author: Karim Tarek Ibrahim
Problem name: Kyoya and Photobooks
Problem link: https://codeforces.com/problemset/problem/554/A
Date: 13/10/2023
*/


#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
	string str;
	int res;
	cin >> str;
	res = 26 - str.size();
	res = res * (str.size() + 1);
	res = res + pow(str.size(), 2);
 
	cout << res;
 
	return 0;
}

