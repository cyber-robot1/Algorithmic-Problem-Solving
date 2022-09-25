/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/bon-appetit/problem
*/

#include <bits/stdc++.h>
using namespace std;

void bonAppetit(int bill[], int n, int k, int b) {
	int sum = 0;
	int b_actual = 0;               // (b_actual) => the actual bill should Anna pay for.
	for (int i = 0; i < n; i++)
	{
		sum = sum + bill[i];
	}
	sum = sum - bill[k];
	b_actual = sum / 2;
	if (b_actual == b)
		cout << "Bon Appetit";
	else
		cout << b - b_actual;
}

int main()
{
    
	int n, k, b;
	int arr[1000];
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> b;
	bonAppetit(arr, n, k, b);
	

	return 0;
}
