/*
Author: Karim Tarek Ibrahim
Problem name: Regular Bracket Sequence
Problem link: https://codeforces.com/problemset/problem/26/B
Date: 22/9/2023
*/

#include <iostream>
#include <deque>
#include <stack>
#include <string>
using namespace std;
 
int main()
{
	string str;
	cin >> str;
	deque<char> d;
	for (int i = 0; i < str.size(); i++)
		d.push_back(str[i]);
	stack<char> s, s2;
 
	bool flag = true;
	int i = 0;
	while (true)
	{
		if (d.empty())
			break;
		else
		{
			if (d[i] == '(')
			{
				s.push(d[i]);
				d.pop_front();
			}
			else
			{
				if (!s.empty())
				{
					d.pop_front();
					s.pop();
				}
				else
				{
					s2.push(d[i]);
					d.pop_front();
				}
			}
		}
	}
 
	cout << str.size() - (s.size() + s2.size());
 
	return 0;
}
