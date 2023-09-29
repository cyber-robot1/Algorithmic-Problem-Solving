/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
bool flag = true;
int tmp1, tmp2, tmp3;
void f(int n)
{
	if (flag)
	{
		tmp1 = 0;
		tmp2 = n;
		tmp3 = tmp2;
		n = 1;
		flag = false;
	}
 
	if (n > tmp3)
		return;
	else
	{
		for (int j = 0; j < tmp1; j++)
			cout << " ";
		for (int j = 1; j <= (tmp2 + (tmp2 - 1)); j++)
			cout << "*";
		cout << endl;
		tmp1++;
		tmp2--;
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
