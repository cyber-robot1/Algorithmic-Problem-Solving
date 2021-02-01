
#include<iostream>
using namespace std;
int main()
{
	long long X, first_digit;
	cin >> X;
	while (X >= 10)
	{
		X = X / 10;
	}
	first_digit = X;
	
	if (first_digit % 2 == 0)
		cout << "EVEN" << endl;
	else
		cout << "ODD" << endl;
 
	return 0;
}
