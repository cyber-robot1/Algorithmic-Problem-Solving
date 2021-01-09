#include <iostream>
using namespace std;
 
int main() {
 
        int X;
	cin >> X;
	if (X % 2 != 0)
	{
		for (int k = 1; k <= 6; k++)
		{
			cout << X << endl;
			X += 2;
		}
	}
	else if (X % 2 == 0)
	{
		X++;
		for (int k = 1; k <= 6; k++)
		{
			cout << X << endl;
			X += 2;
		}
	}

 
    return 0;
}