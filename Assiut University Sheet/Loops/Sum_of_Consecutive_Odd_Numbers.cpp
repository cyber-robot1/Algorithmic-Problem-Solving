/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
	
	int T;
	long long X, Y, sum = 0;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		sum = 0;
		cin >> X >> Y;
		if (X > Y)
		{
			for (int i = Y+1; i < X; i++)
			{
				if (i % 2 != 0)
					sum = sum + i;
			}
			cout << sum;
			cout << endl;
		}
		else
		{
			for (int i = X+1; i < Y; i++)
			{
				if (i % 2 != 0)
					sum = sum + i;
			}
			cout << sum;
			cout << endl;
		}

	}
	
	return 0;
}
