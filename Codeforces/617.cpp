#include <iostream>
using namespace std;

int main()
{
	int x;
	int steps = 0;    // flag variable
	cin >> x;
	if (x == 1 || x == 2 || x == 3 || x == 4 || x == 5)  // base case
		cout << 1 << endl;
	else if (x > 5)
	{
		while (x >= 5)
		{
			x = x - 5;
			steps++;
			if (x == 1 || x == 2 || x == 3 || x == 4)
				steps++;
			else
				continue;
		}
		cout << steps;
	}
	
	
	


    return 0;
}
