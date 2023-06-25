/*
Author: Karim Tarek Ibrahim
Problem name: Juicer
Problem link: https://codeforces.com/problemset/problem/709/A
Date: 26/6/2023
*/

#include <iostream>
using namespace std;
 
int arr[100001];
int main()
{
 
	int n, b, d;
	cin >> n >> b >> d;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
 
	int sum = 0, c = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > b)
			continue;
		else
		{
			sum = sum + arr[i];
			if (sum > d)
			{
				c++;
				sum = 0;
			}
		}
	}
	
	cout << c;
 
	return 0;
}
