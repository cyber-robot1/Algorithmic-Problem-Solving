/*
Author: Karim Tarek Ibrahim
Problem name: Lucky Ticket
Problem link: https://codeforces.com/problemset/problem/146/A
Date: 14/10/2023
*/

#include <iostream>
using namespace std;
 
bool isLucky(string s)
{
	bool flag = true;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != '4' && s[i] != '7')
		{
			flag = false;
			break;
		}
	}
	return flag;
}
 
bool equalHalf(string s)
{
	int sumi = 0, sumj = 0, len = s.size();
	for (int i = len / 2, j = 0; i < len; i++, j++)
	{
		int ci = s[i] - '0';
		int cj = s[j] - '0';
		sumi += ci;
		sumj += cj;
	}
	if (sumi == sumj)
		return true;
	else
		return false;
}
 
int main()
{
	int n;
	string str;
	cin >> n;
	cin >> str;
	if (isLucky(str) && equalHalf(str))
		cout << "YES";
	else
		cout << "NO";
 
	return 0;
}

