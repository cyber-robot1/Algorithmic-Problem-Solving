/*
Author: Karim Tarek Ibrahim
*/
// this is a function to calculate the LCM (Least Common Multiple) of two numbers and print it. 
#include <iostream>
using namespace std;
int lcm(int x, int y)
{
	int lcm, max = 0;
	if (x == 0 || y == 0)
		cout << 0;
	else
	{
		if (x > y)
		{
			max = x;
			lcm = x;
		}
		else
		{
			max = y;
			lcm = y;
		}
		while (true)
		{
			if (lcm % x == 0 && lcm % y == 0)
			{
				return lcm;
				break;
			}
			else
				lcm += max;
		}
	}
}
int main()
{	
	int n, m;
	cin >> n >> m;
	cout << lcm(n, m);
	
    return 0;
}
