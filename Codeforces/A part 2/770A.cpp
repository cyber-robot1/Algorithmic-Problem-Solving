/*
Author: Karim Tarek Ibrahim
Problem name: New Password
Problem link: https://codeforces.com/problemset/problem/770/A
Date: 25/10/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	string answer, letter = "abcdefghijklmnopqrstuvwxyz";
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < k; i++)
		answer = answer + letter[i];
	n -= k;  
	while (n > 0)
	{
		if (n >= k)
		{
			for (int i = 0; i < k; i++)
				answer = answer + letter[i];
		}
		else
		{
			for (int i = 0; i < n; i++)
				answer = answer + letter[i];
		}
		n -= k;
	}
	cout << answer;
 
	return 0;
}
