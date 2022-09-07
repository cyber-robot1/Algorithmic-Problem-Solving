/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
int main()
{
	long long N, digit = 0, T;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		cin >> N;
		if (N == 0)
			cout << 0;
		else
		{
			while (N != 0)
			{
				digit = N % 10;
				N = N / 10;
				cout << digit << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}
