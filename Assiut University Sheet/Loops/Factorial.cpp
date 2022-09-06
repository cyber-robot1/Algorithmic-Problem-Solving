/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
	long long N, T, fact = 1;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		fact = 1;
		cin >> N;
		for (int i = 1; i <= N; i++)
		{
			fact = fact * i;
		}
		cout << fact << endl;
	}


	return 0;
}
