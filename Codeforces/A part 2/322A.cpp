/*
Author: Karim Tarek Ibrahim
Problem name: Ciel and Dancing
Problem link: https://codeforces.com/problemset/problem/322/A
Date: 26/3/2024
*/

#include <bits/stdc++.h>
using namespace std;

bool isVisitB[101], isVisitG[101];
int main()
{
	int n, m, k;
	cin >> n >> m;
	k = (n + m) - 1;
	cout << k << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (!(isVisitB[i] && isVisitG[j]))
			{
				cout << i << " " << j << endl;
				isVisitB[i] = true, isVisitG[j] = true;
			}
			else
				break;
		}
	}

	return 0;
}
