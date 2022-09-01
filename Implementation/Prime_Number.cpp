/*
Author: Karim Tarek Ibrahim
*/
// This is a function to check if the number is prime or not 

#include <iostream>
using namespace std;

bool isPrime(int n)
{
	int c = 0;
	bool flag = true;
	if (n == 1 || n == 0)
		flag = false;
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (n % i == 0)
				c++;
		}
		if (c == 2)
			flag = true;
		else
			flag = false;
	}
	return flag;
}

int main()
{
	
	int n;
	cin >> n;
	cout << isPrime(n);         // prints 1 (true) if it's a prime num, prints 0 (false) if it isn't a prime num.
	

	return 0;
}
