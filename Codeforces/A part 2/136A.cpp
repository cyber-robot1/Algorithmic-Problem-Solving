/*
Author: Karim Tarek Ibrahim
Problem name: Presents
Problem link: https://codeforces.com/problemset/problem/136/A
Date: 25/10/2023
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
	int c = n;
	while (c--)
	{
		int index = distance(arr, min_element(arr, arr + n));
		int mn = *min_element(arr, arr + n);
		index++;
		cout << index << " ";
		for (int i = 0; i < n; i++)
		{
			if (mn == arr[i])
				arr[i] = 900;
		}
	}
 
	return 0;
}
