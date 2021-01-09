#include <iostream>
using namespace std;
 
int main() {
 
        int X;
	cin >> X;
	for (int k = 1; k <= X; k++)
	{
		if (k % 2 != 0)
		{
			cout << k << endl;
		}
	}

 
    return 0;
}