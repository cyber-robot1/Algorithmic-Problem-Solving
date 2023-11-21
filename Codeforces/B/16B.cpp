/*
Author: Karim Tarek Ibrahim
Problem name: Burglar and Matches
Problem link: https://codeforces.com/problemset/problem/16/B
Date: 21/11/2023
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
 
int main()
{
	int n, m; cin >> n >> m;
	vector<pair<int, int>> v;
	vector<pair<int, int>>::iterator it;
	while (m--)
	{
		int a, b; cin >> a >> b;
		v.push_back({ b,a });
	}
	
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
 
	int tot = 0;
	for (it = v.begin(); it != v.end(); it++)
	{
		int a = it->second, b = it->first;
		if (n >= a)
		{
			tot += (a * b);
			n -= a;
		}
		else
		{
			tot += (n * b);
			break;
		}
	}
 
	cout << tot;
 
	return 0;
}
