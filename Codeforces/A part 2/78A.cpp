/*
Author: Karim Tarek Ibrahim
Problem name: Haiku
Problem link: https://codeforces.com/problemset/problem/78/A
Date: 28/10/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	string s1, s2, s3;
	int c1 = 0, c2 = 0, c3 = 0;
	getline(cin, s1);
	getline(cin, s2);
	getline(cin, s3);
	
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
			c1++;
	}
	for (int i = 0; i < s2.size(); i++)
	{
		if (s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u')
			c2++;
	}
	for (int i = 0; i < s3.size(); i++)
	{
		if (s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u')
			c3++;
	}
	if (c1 == 5 && c2 == 7 && c3 == 5)
		cout << "YES";
	else
		cout << "NO";
 
	return 0;
}
