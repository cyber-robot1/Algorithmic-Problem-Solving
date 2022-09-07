/*
Author: Karim Tarek Ibrahim
*/
// This is a program to print digits of the given number separately.

#include <iostream>
using namespace std;

void splitDigits(int N)
{
	int rev_num = 0, digit;
	while (N != 0)
	{
		digit = N % 10;
		N = N / 10;
		rev_num = (rev_num * 10) + digit;
	}
	digit = 0;
	while (rev_num != 0)
	{
		digit = rev_num % 10;
		rev_num = rev_num / 10;
		cout << digit << " ";
	}
}

int main()
{
	
	int N;
	cin >> N;
	splitDigits(N);
	

	return 0;
}
