/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
bool flag = true;
int tmp1, tmp2, tmp3, index = 1;
void f(int n)
{
	if (flag)
	{
		tmp1 = n;
		tmp3 = tmp1;
		tmp2 = 1;
		n = index;
		flag = false;
	}
 
	if (n > tmp1)
		return;
	else
	{
		for (int j = tmp3 - 1; j > 0; j--)
			cout << " ";
		for (int j = 1; j <= tmp2; j++)
			cout << "*";
		cout << endl;
		tmp3--;
		tmp2 += 2;
		f(n + 1);
	}
}
 
int main()
{
	int n;
	cin >> n;
	f(n);
 
	return 0;
}
