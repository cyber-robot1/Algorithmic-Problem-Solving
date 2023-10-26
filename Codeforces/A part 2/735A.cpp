/*
Author: Karim Tarek Ibrahim
Problem name: Ostap and Grasshopper
Problem link: https://codeforces.com/problemset/problem/735/A
Date: 26/10/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
char arr[101];
int main()
{
	int n, k; cin >> n >> k; for (int i = 1; i <= n; i++) cin >> arr[i];
	int x = distance(arr, find(arr, arr + n + 1, 'G'));   // index of G
	int y = distance(arr, find(arr, arr + n + 1, 'T'));  // index of T
 
	if (x > y)
	{
		swap(arr[x], arr[y]);
		swap(x, y);
	}
 
	bool flag = true;
	for (int i = x; i <= y; i += k)
	{	
		if (i == y)
			break;
 
		if (arr[i] == '#' || (y - i) < k)
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
