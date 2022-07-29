/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
int main()
{
	int n, m, z, lcm = 0, max = 0;
	cin >> n >> m >> z;
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
				break;
			else
				lcm += max;
		}
	}
	cout << z / lcm << endl;
	
    return 0;
}
