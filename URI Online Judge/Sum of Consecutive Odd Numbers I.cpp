#include <iostream>
using namespace std;
 
int main() {
 
        int X, Y, Z=0;
	cin >> X >> Y;
	for (int k = X-1; k > Y; k--)
	{
		if (k % 2 != 0)
		{
			Z += k;
		}
	}
	cout << Z << endl;
 
    return 0;
}