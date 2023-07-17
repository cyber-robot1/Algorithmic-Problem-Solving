/*
Author: Karim Tarek Ibrahim
Problem name: Army
Problem link: https://codeforces.com/problemset/problem/38/A
Date: 18/7/2023
*/

#include <iostream>
using namespace std;

int arr[100];
int main()
{
	
	int n, a, b, years = 0;
	cin >> n;
	for (int i = 1; i < n; i++)
		cin >> arr[i];
	cin >> a >> b;

	for (int i = a; i < b; i++)
		years += arr[i];

	cout << years;

	return 0;
}
