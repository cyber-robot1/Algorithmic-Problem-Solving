/*
Author: Karim Tarek Ibrahim
Problem name: Petya and Strings
Problem link: https://codeforces.com/problemset/problem/112/A
Date: 5/6/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
 
	string S1, S2;
	bool flag = true;
	cin >> S1 >> S2;
	int len = S1.length();
 
	for (int i = 0; i < len; i++)
	{
		if (S1[i] >= 97 && S1[i] <= 122)
			S1[i] -= 32;
	}
 
	for (int i = 0; i < len; i++)
	{
		if (S2[i] >= 97 && S2[i] <= 122)
			S2[i] -= 32;
	}
 
	for (int i = 0; i < len; i++)
	{
		if (S1[i] == S2[i])
			continue;
		else
		{
			if (S1[i] > S2[i])
			{
				cout << 1;
				flag = false;
				break;
			}
			else if (S1[i] < S2[i])
			{
				cout << -1;
				flag = false;
				break;
			}
		}
	}
	if (flag)
		cout << 0;
 
	return 0;
}
