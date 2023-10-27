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
	string str, s = "qwertyuiopasdfghjkl;zxcvbnm,./";
	char ch;
	cin >> ch >> str;
	for (int i = 0; i < str.size(); i++)
	{
		for (int j = 0; j < 30; j++)
		{
			if (str[i] == s[j])
			{
				if (ch == 'R')
					answer[i] = s[j - 1];
				else
					answer[i] = s[j + 1];
			}
		}
	}
	
	for (int i = 0; i < str.size(); i++)
		cout << answer[i];
 
	return 0;
}
