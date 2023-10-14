/*
Author: Karim Tarek Ibrahim
Problem name: Magic Numbers
Problem link: https://codeforces.com/problemset/problem/320/A
Date: 14/10/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	string s;
	cin >> s;
	bool flag = true;
	int c4 = 0;
	
	for (int i = 0; i < s.size(); i++)
	{
		if (s[0] != '1')
		{
			flag = false;
			break;
		}
		if (s[i] == '1')
			c4 = 0;
		else if (s[i] == '4')
		{
			c4++;
			if (c4 > 2)
			{
				flag = false;
				break;
			}
		}
		else
		{
			flag = false;
			break;
		}
	}
 
	if (flag)
		cout << "YES";
	else
		cout << "NO";
 
	return 0;
}

