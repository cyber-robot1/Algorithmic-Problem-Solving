/*
Author: Karim Tarek Ibrahim
This's a function of three parameters to determine the middle among them.
*/

#include <iostream>
using namespace std;

int Mid(int a, int b, int c)
{
	int md = 0;
	if (b <= a && a <= c || c <= a && a <= b)
		md = a;
	else if (a <= b && b <= c || c <= b && b <= a)
		md = b;
	else
		md = c;
	return md;
}

int main()
{
	int x, y, z;
	cin >> x >> y >> z;
        cout << Mid(x,y,z);
		
	
	return 0;
}
