/*
Author: Karim Tarek Ibrahim
Problem name: Word
Problem link: https://codeforces.com/problemset/problem/59/A
Date: 5/6/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
 
	string S;
	int lo = 0, up = 0;
	cin >> S;
 
	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] >= 97 && S[i] <= 122)
			lo++;
 
		else if (S[i] >= 65 && S[i] <= 91)
			up++;
	}
	
	if (lo > up)       
	{
		for (int i = 0; i < S.length(); i++)
		{
			if (S[i] >= 65 && S[i] <= 91)
				S[i] = S[i] + 32;
		}
	}
 
	else if (lo < up)   
	{
		for (int i = 0; i < S.length(); i++)
		{
			if (S[i] >= 97 && S[i] <= 122)
				S[i] = S[i] - 32;
		}
	}
 
	else
	{
		for (int i = 0; i < S.length(); i++)
		{
			if (S[i] >= 97 && S[i] <= 122)
				continue;
			else
				S[i] = S[i] + 32;
		}
	}
	
	for (int i = 0; i < S.length(); i++)
		cout << S[i];
 
 
	return 0;
}
