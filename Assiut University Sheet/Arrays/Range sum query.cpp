/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
int arr[100006];
long long p_sum[100006];   // (p_sum) => prefix sum array
 
int main()
{
	int n, t;
	int l, r;
	long long sum = 0;                 // (sum) => flag variable
	cin >> n >> t;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
		p_sum[i] = sum;
	}
	
	while (t--)
	{
		cin >> l >> r;
		l--;
		r--;
		if (l != 0)
			cout << p_sum[r] - p_sum[l - 1];
		else
			cout << p_sum[r];
		cout << endl;
	}
 
	return 0;
}
