/*
Author: Karim Tarek Ibrahim
Problem name: Easter Eggs
Problem link: https://codeforces.com/problemset/problem/78/B
Date: 20/11/2023
*/

#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
	vector<char> v = { 'R','O','Y','G','B','I','V' };
	int n; cin >> n;
	if (n == 7)
		cout << "ROYGBIV";
	else
	{
		n -= 7;
		while (n--)
		{
			int c = 4, tmp = 0;
			for (int i = (v.size()) - 1; c != 0; i--)
			{
				if (c == 1)
					tmp = v[i];
				c--;
			}
			v.push_back(tmp);
		}
		for (auto it : v)
			cout << it;
	}
 
	return 0;
}
