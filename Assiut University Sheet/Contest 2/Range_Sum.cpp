/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
	
	long long T, num1, num2, res1, res2;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		cin >> num1 >> num2;
		if (num1 > num2)
			swap(num1, num2);
		res1 = ((num1-1) * ((num1-1) + 1)) / 2;
		res2 = (num2 * (num2 + 1) / 2);
		cout << res2 - res1 << endl;

	}


	return 0;
}


