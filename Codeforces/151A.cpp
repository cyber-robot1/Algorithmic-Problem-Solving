/*
Author: Karim Tarek Ibrahim
*/
#include <iostream>
using namespace std;
int min(int x, int y, int z)
{
	int min = 0;
	if (x <= y && x <= z)
		min = x;
	else if (y <= x && y <= z)
		min = y;
	else if (z <= x && z <= y)
		min = z;
	return min;
}
int main()
{
	
	int n, k, l, c, d, p, nl, np, t_limes = 0, t_drink = 0, t_salt = 0;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	t_limes = c * d;                                                       // total limes for each friend.
	t_drink = (k * l) / nl;                                               // total amount of drink for each friend.
	t_salt = p / np;                                                     // total amount of salt for each friend.
	cout << min(t_limes, t_drink, t_salt) / n;


	return 0;
}
