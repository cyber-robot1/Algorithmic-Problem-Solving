/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int lcm(int x, int y)
{
	int lcm, max = 0;
	if (x == 0 || y == 0)
		cout << 0;
	else
	{
		if (x > y)
		{
			max = x;
			lcm = x;
		}
		else
		{
			max = y;
			lcm = y;
		}
		while (true)
		{
			if (lcm % x == 0 && lcm % y == 0)
			{
				return lcm;
				break;
			}
			else
				lcm += max;
		}
	}
}

int main()
{
	long long A, B;
	cin >> A >> B;
	cout << (A * B) / lcm(A, B);


	return 0;
}
