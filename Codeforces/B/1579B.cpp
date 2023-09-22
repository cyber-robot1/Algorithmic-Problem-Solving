/*
Author: Karim Tarek Ibrahim
Problem name: Shifting Sort
Problem link: https://codeforces.com/problemset/problem/1579/B
Date: 22/9/2023
*/

#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
 
int ans[51][3];
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, tmp, sz;
		cin >> n;
		tmp = n;
		deque<int> v1, v2;
		while (n--)
		{
			int x;
			cin >> x;
			v1.push_back(x);
		}
		v2 = v1;
		sz = v2.size();
		sort(v2.begin(), v2.end());
 
		int k = 0, i = 0, z = 1;
		while (!v1.empty())
		{
			if (v2[i] == v1[i])
			{
				z++;
				v1.pop_front();
				v2.pop_front();
				continue;
			}
			else
			{
				int l, r, d = 0;
				l = z;
				r = sz;
				while (v2[i] != v1[i])
				{
					v1.push_back(v1.front());
					v1.pop_front();
					d++;
				}
				ans[k][0] = l;
				ans[k][1] = r;
				ans[k][2] = d;
				k++;
				z++;
				v1.pop_front();
				v2.pop_front();
			}
		}
 
		cout << k << endl;
		for (int i = 0; i < k; i++)
		{
			for (int j = 0; j <= 2; j++)
				cout << ans[i][j] << " ";
			cout << endl;
		}
	}
 
	return 0;
}
