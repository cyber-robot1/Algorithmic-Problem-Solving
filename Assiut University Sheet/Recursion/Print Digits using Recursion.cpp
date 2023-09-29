/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
bool flag = true;
void f(int n)
{
	if (flag)
	{
		if (n == 0)
			cout << 0;
		flag = false;
	}
	if (n == 0)
		return;
 
	f(n / 10);
 
	cout << n % 10 << " ";
}
 
int main()
{
	
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		f(n);
		flag = true;
		cout << endl;
	}
 
	return 0;
}
