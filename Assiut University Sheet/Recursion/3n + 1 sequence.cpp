/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
int c = 1;
bool flag = true;
void f(int num)
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
		if (num % 2 == 0)
			return f(num / 2);
		else
			return f(3 * num + 1);
	}
}
 
int main()
{
	int n;
	cin >> n;
	f(n);
	cout << c;
 
	return 0;
}
