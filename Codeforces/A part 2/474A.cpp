/*
Author: Karim Tarek Ibrahim
Problem name: Keyboard
Problem link: https://codeforces.com/problemset/problem/474/A
Date: 28/10/2023
*/

#include <iostream>
using namespace std;
 
char answer[101];
int main()
{
	string s1 = "qwertyuiop", s2 = "asdfghjkl;", s3 = "zxcvbnm,./", str;
	char ch;
	cin >> ch >> str;
	for (int i = 0; i < str.size(); i++)
	{
		for (int j = 0; j < s1.size(); j++)
		{
			if (str[i] == s1[j])
			{
				if (ch == 'R')
					answer[i] = s1[j - 1];
				else
					answer[i] = s1[j + 1];
			}
		}
 
		for (int j = 0; j < s2.size(); j++)
		{
			if (str[i] == s2[j])
			{
				if (ch == 'R')
					answer[i] = s2[j - 1];
				else
					answer[i] = s2[j + 1];
			}
		}
 
		for (int j = 0; j < s3.size(); j++)
		{
			if (str[i] == s3[j])
			{
				if (ch == 'R')
					answer[i] = s3[j - 1];
				else
					answer[i] = s3[j + 1];
			}
		}
	}
	
	for (int i = 0; i < str.size(); i++)
		cout << answer[i];
 
	return 0;
}
