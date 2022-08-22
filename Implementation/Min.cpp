/*
Author: Karim Tarek Ibrahim
This's a function of three parameters to determine the minimum among them.
*/
#include <iostream>
using namespace std;

int Min(int a, int b, int c)
{
	int mn = 0;
	if (a < b && a < c)
		mn = a;
	else if (b < a && b < c)
		mn = b;
	else if (c < a && c < b)
		mn = c;
	return mn;
}

int main()
{
	int x, y, z;
	cin >> x >> y >> z;
  cout << Min(x,y,z);
		
	
	return 0;
}
