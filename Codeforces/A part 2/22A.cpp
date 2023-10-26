/*
Author: Karim Tarek Ibrahim
Problem name: Second Order Statistics
Problem link: https://codeforces.com/problemset/problem/22/A
Date: 26/10/2023
*/


#include <iostream>
#include <algorithm>
using namespace std;
 
int arr[101];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	int mn = *min_element(arr, arr + n);
 
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != mn)
		{
			cout << arr[i];
			flag = true;
			break;
		}
	}
 
	if (!flag)
		cout << "NO";
 
	return 0;
}
