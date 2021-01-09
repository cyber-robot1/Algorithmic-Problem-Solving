#include <iostream> 
using namespace std;
 
int main() {
 
        int x, y, z;
	int Max = 0, Min = 0, Mid = 0;
	cin >> x >> y >> z;
	if (x > y&& x > z)
	{
		Max = x;
		if (y < z)
		{
			Min = y;
			Mid = z;
		}
		else if (z < y)
		{
			Min = z;
			Mid = y;
		}
	}
	else if (y > x&& y > z)
	{
		Max = y;
		if (x < z)
		{
			Min = x;
			Mid = z;
		}
		else if (z < x)
		{
			Min = z;
			Mid = x;
		}
	}
	else if (z > x&& z > y)
	{
		Max = z;
		if (x < y)
		{
			Min = x;
			Mid = y;
		}
		else if (y < x)
		{
			Min = y;
			Mid = x;
		}
	}
	cout << Min << endl << Mid << endl << Max << endl;
	cout << endl;
	cout << x << endl << y << endl << z << endl;
 
    return 0;
}