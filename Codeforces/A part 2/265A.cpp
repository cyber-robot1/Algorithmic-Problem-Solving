/*
Author: Karim Tarek Ibrahim
Problem name: Colorful Stones (Simplified Edition)
Problem link: https://codeforces.com/problemset/problem/265/A
Date: 19/8/2023
*/

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	
	string s, t;
	cin >> s >> t;
	int i = 0, j = 0;
	for (i; i < t.size();)
	{
		for (j; j < s.size();)
		{
			if (t[i] == s[j])
			{
				i++;
				j++;
				break;
			}
			else
			{
				i++;
				break;
			}
		}
	}
	
	cout << j + 1;
 
	return 0;
}

