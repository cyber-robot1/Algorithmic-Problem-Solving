/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;


int main()
{
	int a, b, c, flag = 0;
	cin >> a >> b >> c;
	if (!(a >= 1 && b >= 2 && c >= 4))
		cout << 0;
	else
	{
		while (a >= 1 && b >= 2 && c >= 4)
		{
			a -= 1;
			b -= 2;
			c -= 4;
			flag++;
		}
		cout << 7 * flag;
	}
	
		
	return 0;
}

