/*
Author: Karim Tarek Ibrahim
This's a function of three parameters to determine the maximum among them.
*/

#include <iostream>
using namespace std;

int Max(int a, int b, int c)
{
	int mx = 0;
	if (a > b && a > c)
		mx = a;
	else if (b > a && b > c)
		mx = b;
	else if (c > a && c > b)
		mx = c;
	return mx;
}

int main()
{
	int x, y, z;
	cin >> x >> y >> z;
        cout << Max(x,y,z);
		
	
	return 0;
}

