/*
Author: Karim Tarek Ibrahim
Problem name: Codeforces Checking
Problem link: https://codeforces.com/problemset/problem/1791/A
Date: 30/10/2023
*/

#include <iostream>
using namespace std;
 
int main()
{
	int n; cin >> n;
	string str = "codeforces";
	while (n--)
	{
		char x; cin >> x;
		bool flag = false;
		for (int i = 0; i < str.size(); i++)
		{
			if (x == str[i])
			{
				cout << "YES" << endl;
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << "NO" << endl;
	}
 
	return 0;
}

