/*
Author: Karim Tarek Ibrahim
Problem name: Hongcow Learns the Cyclic Shift
Problem link: https://codeforces.com/problemset/problem/745/A
Date: 14/10/2023
*/

#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
 
int main()
{
	string str;
	int c = 1;
	bool flag = true;
	deque<char> d, tmp;
	cin >> str;
	for (int i = 0; i < str.size(); i++)
		d.push_back(str[i]);
 
	tmp = d;
	while (true)
	{
		if (flag)
		{
			tmp.push_front(tmp.back());
			tmp.pop_back();
			flag = false;
		}
		else
		{
			if (d == tmp)
				break;
			else
			{
				c++;
				tmp.push_front(tmp.back());
				tmp.pop_back();
			}
		}
	}
	cout << c;
 
	return 0;
}

