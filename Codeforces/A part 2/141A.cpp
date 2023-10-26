/*
Author: Karim Tarek Ibrahim
Problem name: Amusing Joke
Problem link: https://codeforces.com/problemset/problem/141/A
Date: 26/10/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
bool isTrue(string str)
{
	bool flag = true;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != '[')
		{
			flag = false;
			break;
		}
	}
	return flag;
}
 
int main()
{
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	bool f1 = false, f2 = false;       
	int Size = s1.size();
	if (s3.size() == (s1.size() + s2.size()))
	{
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		for (int i = 0; i < s1.size(); i++)
		{
			for (int j = 0; j < s3.size(); j++)
			{
				if (s1[i] == s3[j])
				{
					s1[i] = '[';
					s3[j] = '[';
					break;
				}
			}
		}
		sort(s3.begin(), s3.end());
		if (isTrue(s1))
			f1 = true;
		while (Size--)
			s3.pop_back();
		if (s2 == s3)
			f2 = true;
		if (f1 && f2)
			cout << "YES";
		else
			cout << "NO";
	}
	else
		cout << "NO"; 
 
	return 0;
}

