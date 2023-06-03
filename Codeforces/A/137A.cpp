/*
Author: Karim Tarek Ibrahim
Problem name: Postcards and photos
Problem link: https://codeforces.com/problemset/problem/137/A
Date: 3/6/2023
*/

#include <iostream>
#include <cmath>
using namespace std;

char s[101];
int main()
{
	
	string S;
	cin >> S;
	int len = S.length();
	for (int i = 0; i < S.length(); i++)
		s[i] = S[i];

	// No. of consecutive C groups
	int memC = 0, groupC = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] == 'C')
		{
			memC++;
			if (s[i + 1] == 'C')
				continue;
			else
			{
				groupC = groupC + ceil((double)memC / 5);
				memC = 0;
			}
		}
	}
	
	// No. of consecutive P groups
	int memP = 0, groupP = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] == 'P')
		{
			memP++;
			if (s[i + 1] == 'P')
				continue;
			else
			{
				groupP = groupP + ceil((double)memP / 5);
				memP = 0;
			}
		}
	}
	
	cout << groupC + groupP;

	return 0;
}
