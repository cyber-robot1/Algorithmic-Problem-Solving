/*
Author: Karim Tarek Ibrahim
Problem name: Fence
Problem link: https://codeforces.com/problemset/problem/363/B
Date: 24/11/2023
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int arr[150001], prefix_sum[150001];
int main()
{
	int n, k; cin >> n >> k;
	vector<pair<int, int>> v; 
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
			prefix_sum[i] = arr[i];
		else
			prefix_sum[i] = prefix_sum[i - 1] + arr[i];
	}
	for (int i = 1; i <= n - (k - 1); i++)
	{
		if (i == 1)
			v.push_back({ prefix_sum[k],1 });
		else
		{
			int start = i;
			int end = i + (k - 1);
			v.push_back({ (prefix_sum[end] - prefix_sum[start - 1]),start });
		}
	}
	sort(v.begin(), v.end());
	auto it = v.begin();
	cout << it->second;
 
	return 0;
}
