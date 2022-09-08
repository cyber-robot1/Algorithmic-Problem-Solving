/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
	long long N, first_num = 0, second_num = 1, new_num;
	cin >> N;
	if (N == 1)
		cout << 0;
	else if (N == 2)
		cout << 0 << " " << 1;
	else
	{
		cout << 0 << " " << 1;
		for (int i = 3; i <= N; i++)
		{
			new_num = first_num + second_num;
			cout << " ";
			cout << new_num;
			first_num = second_num;
			second_num = new_num;
		}
	}


	return 0;
}
