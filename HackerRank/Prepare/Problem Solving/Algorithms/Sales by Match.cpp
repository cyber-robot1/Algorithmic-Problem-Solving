/*
Author: Karim Tarek Ibrahim
Problem link: https://www.hackerrank.com/challenges/sock-merchant/problem
*/

#include <bits/stdc++.h>
using namespace std;

int MaxinArray(int arr[], int n)
{
	int mx = 0;
	mx = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > mx)
			mx = arr[i];
	}
	return mx;
}

int  MininArray(int arr[], int n)
{
	int mn;
	mn = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < mn)
			mn = arr[i];
	}
	return mn;
}

int sockMerchant(int ar[], int n) {
	int Max, Min, Pairs = 0, freq[100000] = { 0 };
	Max = MaxinArray(ar, n);
	Min = MininArray(ar, n);
	for (int i = 0; i < n; i++)
	{
		freq[ar[i]]++;
	}
	for (int i = Min; i <= Max; i++)
	{
		Pairs = Pairs + freq[i] / 2;
	}
	return Pairs;
}

int main()
{

	int n, arr[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << sockMerchant(arr, n);


	return 0;
}
