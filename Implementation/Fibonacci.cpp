/*
Author: Karim Tarek Ibrahim
*/
// This is a function to print the fibonacci sequence of a given number.

#include <iostream>
using namespace std;

void fib(int n)
{
	int first_n = 0, second_n = 1, new_n;
	if (n == 1)
		cout << 0;
	else if (n == 2)
		cout << 0 << " " << 1;
	else
	{
		cout << 0 << " " << 1;
		for (int i = 3; i <= n; i++)
		{
			new_n = first_n + second_n;
			cout << " ";
			cout << new_n;
			first_n = second_n;
			second_n = new_n;
		}
	}
}

int main()
{
	int x;
	cin >> x;
	fib(x);


	return 0;
}
