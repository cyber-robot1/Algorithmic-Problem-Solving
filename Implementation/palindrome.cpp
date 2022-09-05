/*
Author: Karim Tarek Ibrahim
*/
// This is a program to check if the given number is palindrome or not.


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
	if (x == reverse_num(x))
		cout << "Palindrome";
	else
		cout << "NOT";



	return 0;
}
