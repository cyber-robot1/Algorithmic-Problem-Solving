/*
Author: Karim Tarek Ibrahim
Problem name: Lovely Palindromes
Problem link: https://codeforces.com/problemset/problem/688/B
Date: 24/11/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
	string str, rev; cin >> str;
	rev = str;
	reverse(rev.begin(), rev.end());
	cout << str + rev;
 
	return 0;
}

