/*
Author: Karim Tarek Ibrahim
*/


#include <iostream>
using namespace std;
 
long long input;
bool f(long long ini)
{
	if (ini > input)
		return false;
 
	else if (ini == input)
		return true;
 
	else
		return f(ini * 10) || f(ini * 20);
}
 
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		cin >> input;
		if (f(1))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
 
	return 0;
}
