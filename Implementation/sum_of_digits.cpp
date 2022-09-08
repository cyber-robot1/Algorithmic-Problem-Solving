/*
Author: Karim Tarek Ibrahim
*/
// This is a function to calculate the sum of digits of a given number.

#include <iostream>
using namespace std;

int sumDigits(int n)
{
	int digit, sum_digits = 0;
	while (n != 0)
	{
		digit = n % 10;
		n = n / 10;
		sum_digits = sum_digits + digit;
	}
	return sum_digits;
}

int main()
{
	
	int N;
	cin >> N;
	cout << sumDigits(N);
	

	return 0;
}
