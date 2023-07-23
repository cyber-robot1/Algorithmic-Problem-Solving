/*
Author: Karim Tarek Ibrahim
Problem name: Diverse Strings
Problem link: https://codeforces.com/problemset/problem/1144/A
Date: 23/7/2023
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int freq[150];
int main()
{

	int n;
	cin >> n;
	while (n--)
	{
		string s;
		bool f1 = true, f2 = true;
		cin >> s;
		sort(s.begin(), s.end());

		// Checking if the characters in given string are consecutive or not
		for (int i = 0, j = s[0]; i < s.size(); i++, j++)
		{
			if (s[i] == (char)j)
				continue;
			else
			{
				f1 = false;
				break;
			}
		}

		for (int i = 0; i < s.size(); i++)
			freq[s[i]]++;

		// Checking if the characters in the given string are distinct or not
		for (int i = s[0]; i <= s[s.size() - 1]; i++)
		{
			if (freq[i] > 1)
			{
				f2 = false;
				break;
			}
		}

		if (f1 && f2)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		for (int i = s[0]; i <= s[s.size() - 1]; i++)
			freq[i] = 0;
	}

	return 0;
}
