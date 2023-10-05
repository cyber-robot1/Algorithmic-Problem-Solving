/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
int c;
bool flag = true;
void f(long long num)
{
	if (flag)
	{
		if (num == 1)
			return;
		else
			flag = false;
	}
 
	if (num == 1)
		return;
	else
	{
		c++;
		return f(num / 2);
	}
}
 
int main()
{
	long long n;
	cin >> n;
	f(n);
	cout << c;
 
	return 0;
}
