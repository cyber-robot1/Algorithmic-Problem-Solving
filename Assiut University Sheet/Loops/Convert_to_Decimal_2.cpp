/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	
	int N, rem, result, T, ones;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		result = 0, ones = 0;
		cin >> N;
		while (N != 0)
		{
			rem = N % 2;
			N = N / 2;
			if (rem > 0)
				ones++;
		}
		for (int i = 0; i < ones; i++)
		{
			result = result + pow(2, i);
		}
		cout << result << endl;
	}

	return 0;
}


