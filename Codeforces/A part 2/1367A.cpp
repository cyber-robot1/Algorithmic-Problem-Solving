/*
Author: Karim Tarek Ibrahim
Problem name: Short Substrings
Problem link: https://codeforces.com/problemset/problem/1367/A
Date: 22/7/2023
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '#')
				continue;
			else
			{
				if ((i + 1) % 2 == 0)
					s[i + 1] = '#';

				cout << s[i];
			}
		}

		cout << endl;
	}

	return 0;
}
