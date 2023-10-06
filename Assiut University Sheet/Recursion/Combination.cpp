/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
int a[31], b[31];
int main()
{
	int N, R, Z, mn = 0, mx = 0;
	cin >> N >> R;
	if (N < R)
		cout << 0;
	else
	{
		Z = N - R;
 
		if (R >= (Z))
		{
			mx = R;
			mn = Z;
		}
		else
		{
			mx = Z;
			mn = R;
		}
 
		for (int i = mx + 1; i <= N; i++)
			a[i] = i;
 
		for (int i = mn; i >= 2; i--)
			b[i] = i;
 
		for (int i = mx + 1; i <= N; i++)
		{
			for (int j = mn; j >= 2; j--)
			{
				if (b[j] == 0)
					continue;
				else
				{
					if (i % j == 0)
					{
						a[i] = i / j;
						b[j] = 0;
						break;
					}
				}
			}
		}
 
		long long x = 1, y = 1;
		for (int i = mx + 1; i <= N; i++)
			x = x * a[i];
 
		for (int i = mn; i >= 2; i--)
		{
			if (b[i] == 0)
				continue;
			else
				y = y * b[i];
		}
		cout << x / y;
	}
 
	return 0;
}
