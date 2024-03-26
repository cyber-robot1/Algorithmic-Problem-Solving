/*
Author: Karim Tarek Ibrahim
Problem name: Dreamoon and Stairs
Problem link: https://codeforces.com/problemset/problem/476/A
Date: 26/3/2024
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> vec;
	if (n == m)
		cout << n;
	else if (n < m)
		cout << -1;
	else
	{
		int pos = 0, i = 0, j = 0;
		if (n % 2 == 0)
			i = 2;
		else
			i = 1;
		while (true)
		{
			if (n == i)
			{
				pos = j;
				break;
			}
			i += 2;
			j++;
		}
		pos = n - pos;
		for (int i = 1; i <= pos; i++)
		{
			if (n % m == 0)
				vec.push_back(n);
			n--;
		}
		cout << *min_element(vec.begin(), vec.end());
	}
 
	return 0;
}
