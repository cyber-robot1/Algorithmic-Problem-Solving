/*
Author: Karim Tarek Ibrahim
Problem name: LLPS
Problem link: https://codeforces.com/problemset/problem/202/A
Date: 13/10/2023
*/

#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
 
int main()
{
	
	string str;
	deque<char> d;
	cin >> str;
	sort(str.begin(), str.end());
	char x = *max_element(str.begin(), str.end());
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == x)
			d.push_back(str[i]);
	}
 
	for (int i = 0; i < d.size(); i++)
		cout << d[i];
 
	return 0;
}
