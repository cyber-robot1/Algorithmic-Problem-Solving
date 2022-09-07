/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

bool func(long long A)
{
	long long digit, num;
	bool flag = false;
	num = A;
	while (num != 0)
	{
		digit = num % 10;
		num = num / 10;
		if (digit == 4 || digit == 7)
			flag = true;
		else
		{
			flag = false;
			break;
		}
	}
	return flag;
}

int main()
{
	long long A, B;
	bool flag = false;
	cin >> A >> B;
	for (int i = A; i <= B; i++)
	{
		if (func(i))
		{
			cout << i << " ";
			flag = true;
		}
	}
	if (flag == false)
		cout << -1;

	
	return 0;
}
