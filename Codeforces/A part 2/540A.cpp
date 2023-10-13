/*
Author: Karim Tarek Ibrahim
Problem name: Combination Lock
Problem link: https://codeforces.com/problemset/problem/540/A
Date: 13/10/2023
*/

#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
	int n, sum = 0, c = 0;
	string s1, s2;
	cin >> n;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.size(); i++)
	{
		int A = s1[i] - '0';
		int B = s2[i] - '0';
 
		if (abs(A - B) <= 5)
			c = c + abs(A - B);
		else
		{
			if (A > B)
			{
				while (A != B)
				{
					c++;
					if (A == 9)
						A = 0;
					else
						A++;
				}
			}
			else
			{
				while (A != B)
				{
					c++;
					if (A == 0)
						A = 9;
					else
						A--;
				}
			}
		}
		sum += c;
		c = 0;
	}
 
	cout << sum;
 
	return 0;
}
