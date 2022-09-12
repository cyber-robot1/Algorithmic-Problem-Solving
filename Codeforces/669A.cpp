/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
int main()
{
	
	long long n;
	cin >> n;
	long long ans = 2 * (n / 3);
	if (n % 3)
		ans++;
	cout << ans;
	
 
 
 
	return 0;
}
