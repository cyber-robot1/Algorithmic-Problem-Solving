/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
	
	long long N, X, c = 0, max = 0;
	cin >> N;
	while (N--)
	{
		cin >> X;
		while (X % 2 == 0)
		{
			X = X / 2;
			c++;
		}
		if (c > max)
			max = c;
		c = 0;
	}
	cout << max;
	

	return 0;
}


