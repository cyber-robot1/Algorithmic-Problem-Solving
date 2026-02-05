#include <iostream>
using namespace std;

void dec2bin(int n)
{
	if (n == 0)
		cout << n % 2;

	if (n == 1)
	{
		cout << n % 2;
		return;
	}
	dec2bin(n / 2);
	cout << n % 2;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		dec2bin(n);
		cout << endl;
	}	
	
	return 0;
}
