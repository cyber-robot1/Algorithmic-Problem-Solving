/*
Author: Karim Tarek Ibrahim
Problem name: 01 Game
Problem link: https://codeforces.com/problemset/problem/1373/B
Date: 12/10/2023
*/

#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		int sz = str.size();
		deque<char> d(sz);
		for (int i = 0; i < sz; i++)
			d[i] = str[i];
 
		sort(d.begin(), d.end());
		bool f0 = false, f1 = false;
		int c = 0;
		for (int i = 0; i < sz; i++)
		{
			int front, back;
			if (!d.empty())
			{
				front = d.front();
				back = d.back();
				if (d.size() != 1)
				{
					d.pop_front();
					d.pop_back();
				}
				if (front == '0')
					f0 = true;
				if (back == '1')
					f1 = true;
			}
			else
			{
				f0 = false;
				f1 = false;
			}
			c++;
			if (f0 && f1)
			{
				f0 = false;
				f1 = false;
				continue;
			}
			else
			{
				if (c % 2 == 0)
					cout << "DA" << endl;
				else
					cout << "NET" << endl;
				break;
			}
		}
	}
 
	return 0;
}
