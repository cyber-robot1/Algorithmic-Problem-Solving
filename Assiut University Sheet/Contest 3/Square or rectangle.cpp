/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;
 
int main()
{
	int t;
	long long w, h;
	cin >> t;
	while (t--)
	{
		cin >> w >> h;
		if (w == h)
			cout << "Square" << endl;
		else
			cout << "Rectangle" << endl;
	}
 
	
	return 0;
}
