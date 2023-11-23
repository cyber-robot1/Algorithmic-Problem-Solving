/*
Author: Karim Tarek Ibrahim
Problem name: Kuriyama Mirai's Stones
Problem link: https://codeforces.com/problemset/problem/433/B
Date: 23/11/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[100001];
long long v[100001], u[100001];
 
void prefix_sum1(int Size, int arr[])
{
	for (int i = 1; i <= Size; i++)
	{
		if (i == 1)
			v[i] = arr[i];
		else
			v[i] = v[i - 1] + arr[i];
	}
}
 
void prefix_sum2(int Size, int arr[])
{
	for (int i = 1; i <= Size; i++)
	{
		if (i == 1)
			u[i] = arr[i];
		else
			u[i] = u[i - 1] + arr[i];
	}
}
 
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	prefix_sum1(n, arr);
	sort(arr, arr + n + 1);
	prefix_sum2(n, arr);
	
	int m; cin >> m;
	while (m--)
	{
		int type, l, r;
		cin >> type >> l >> r;
		if (type == 1)
		{
			if (l == 1)
				cout << v[r] << endl; 
			else
				cout << v[r] - v[l - 1] << endl;
		}
		else
		{
			if (l == 1)
				cout << u[r] << endl;
			else
				cout << u[r] - u[l - 1] << endl;
		}
	}
 
	return 0;
}
