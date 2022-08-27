/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
 
int main()
{
	long long n;
	cin >> n;
	if (n % 2 == 0)     // n is even
		cout << n / 2;
	else                // n is odd
		cout << (-1 * (n+1))/2;
	
		
	return 0;
}
