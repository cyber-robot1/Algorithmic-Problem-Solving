/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
	long long X, flag = 0;
	cin >> X;
	for (int i = 1; i <= X; i++)
	{
		if (X % i == 0)
			flag++;
	}
	if (flag == 2)
		cout << "YES";
	else
		cout << "NO";


	return 0;
}
