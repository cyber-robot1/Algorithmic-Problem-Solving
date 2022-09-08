/*
Author: Karim Tarek Ibrahim
*/

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
	
	long long N;
	int A, B, sum = 0;
	cin >> N >> A >> B;
	for (int i = 1; i <= N; i++)
	{
		if (sumDigits(i) >= A && sumDigits(i) <= B)
			sum = sum + i;
	}
	cout << sum;
 
 
	return 0;
}
