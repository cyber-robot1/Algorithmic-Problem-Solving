/*
Author: Karim Tarek Ibrahim
*/
// This is a function to calculate the factorial of a given number.

#include <iostream>
using namespace std;

int Factorial(int x)
{
	int fact = 1;
	for (int i = 1; i <= x; i++)
	{
		fact = fact * i;
	}
	return fact;
}

int main()
{
	int a;
	cin >> a;
	cout << Factorial(a);


	return 0;
}
