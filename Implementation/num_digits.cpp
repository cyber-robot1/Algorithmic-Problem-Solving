/*
Author: Karim Tarek Ibrahim
*/
// This is a function to calculate the number of digits of a given number.

#include <iostream>
using namespace std;

void num_digits(int n)
{
	int c = 0;
	if (n < 10)
		cout << 1;
	else
	{
		while (n != 0)
		{
			n /= 10;
			c++;
		}
		cout << c;
	}
}
int main()
{
	
  int number;
	cin >> number;
	num_digits(number);

	return 0;
}
