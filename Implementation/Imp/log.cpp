/*
Author: Karim Tarek Ibrahim
*/
// cpp program given a number N and calculate log2(N)

#include <iostream>
using namespace std;

int main()
{
	int n, log = 0;
	cin >> n;
	while (n != 1)
	{
		log++;
		n /= 2;
	}
	cout << log;

	return 0;
}
