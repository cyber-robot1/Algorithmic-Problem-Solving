#include <iostream>
using namespace std;
int main()
{
	int N, f_digit, l_digit;
	cin >> N;
	
	if (N%10==0)
		cout << "YES" << endl;
	
	else if (N > 10)
	{
		f_digit = N / 10;
		l_digit = N % 10;
		if ((f_digit % l_digit == 0) || (l_digit % f_digit == 0))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
