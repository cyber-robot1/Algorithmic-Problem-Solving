/*
Author: Karim Tarek Ibrahim
*/
// This is a function to check if the number is prime or not 

#include <iostream>
using namespace std;

void isPrime(int x)
{
	int flag = 0;
	if (x == 0 || x == 1)
		cout << "Not Prime";
	else
	{
		for (int i = 1; i <= x; i++)
		{
			if (x % i == 0)
				flag++;
		}
		if (flag == 2)
			cout << "Prime";
		else
			cout << "Not Prime";
	}
}

int main()
{
	int a;
	cin >> a;
	isPrime(a);

	return 0;
}

