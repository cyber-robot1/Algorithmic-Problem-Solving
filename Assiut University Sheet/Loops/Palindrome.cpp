/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int main()
{
	long long N, digit = 0, rev_num = 0, num;
	cin >> N;
	num = N;
	while (num != 0)
	{
		digit = num % 10;
		num = num / 10;
		rev_num = (rev_num * 10) + digit;
	}
	if (N == rev_num)     // Palindrome Number.
	{
		cout << rev_num << endl;
		cout << "YES";
	}
	else
	{
		cout << rev_num << endl;
		cout << "NO";
	}
	

	return 0;
}
