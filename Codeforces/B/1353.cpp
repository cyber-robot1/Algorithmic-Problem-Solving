/*
Author: Karim Tarek Ibrahim
Problem name: Two Arrays And Swaps
Problem link: https://codeforces.com/problemset/problem/1353/B
Date: 18/7/2023
*/

#include <iostream>
#include <algorithm>
using namespace std;

int a[31], b[31];
int main()
{

	int n, t, k, sum = 0;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
			cin >> b[i];

		sort(a, a + n);
		sort(b, b + n);
		reverse(b, b + n);

		int i = 0;
		while (k--)
		{
			if (a[i] < b[i])
				swap(a[i], b[i]);
			else
				break;

			i++;
		}

		for (int i = 0; i < n; i++)
			sum += a[i];

		cout << sum << endl;
		sum = 0;
	}

	return 0;
}
