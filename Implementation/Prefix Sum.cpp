/*
Author: Karim Tarek Ibrahim
*/
// This is a program to find the range of sum between l and r indexes of elements in a given array.

#include <iostream>
using namespace std;

int main()
{
	int n, arr[100], sum = 0, l, r;
	int p_sum[100] = { 0 };            // prefix sum array
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> l >> r;
  
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
		p_sum[i] = sum;
	}
	if (l != 0)
		cout << p_sum[r] - p_sum[l - 1];
	else
		cout << p_sum[r];

	return 0;
}
