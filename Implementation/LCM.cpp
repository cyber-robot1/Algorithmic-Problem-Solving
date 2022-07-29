/*
Author: Karim Tarek Ibrahim
*/
// this is an algorithm to calculate the LCM (Least Common Multiple) of two numbers and print it. 
#include <iostream>
using namespace std;

int main()
{
	int n, m, lcm = 0, max = 0;
	cin >> n >> m;
	if (n == 0 || m == 0)
		cout << 0 << endl;
	else
	{
		if (n > m)
		{
			max = n;
			lcm = n;
		}
		else
		{
			max = m;
			lcm = m;
		}
		while (true)
		{
			if (lcm % n == 0 && lcm % m == 0)
			{
				cout << "lcm(" << n << "," << m << ")" << " = " << lcm << endl;
				break;
			}
			else
				lcm += max;
		}
	}
    
  return 0;
}
