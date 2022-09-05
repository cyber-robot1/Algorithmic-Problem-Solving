/*
Author: Karim Tarek Ibrahim
*/
// This is a function to reverse a given number.

#include <iostream>
using namespace std;

int reverse_num(int n)
{
	int rev_n = 0;                       // rev_n = reverse of n.
	for (int i = 0; n != 0; i++)
	{
		int digit = n % 10;
		n = n / 10;
		rev_n = (rev_n * 10) + digit;
	}
	return rev_n;
}

int main()
{
	
        int x;
	cin >> x;
	cout << reverse_num(x);

	return 0;
}
