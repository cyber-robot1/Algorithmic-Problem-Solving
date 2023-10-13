/*
Author: Karim Tarek Ibrahim
Problem name: inc ARG
Problem link: https://codeforces.com/problemset/problem/465/A
Date: 13/10/2023
*/

#include <iostream>
using namespace std;
 
int consecutiveOnes(string str)
{
	int c = 0;
	bool flag = false;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '1')
			c++;
		else
		{
			flag = true;
			break;
		}
	}
	if (flag)
		c++;
	return c;
}
 
int main()
{
	int n;
	string str;
	cin >> n;
	cin >> str;
	if (str[0] == '0')
		cout << 1;
	else
		cout << consecutiveOnes(str);
 
	return 0;
}

