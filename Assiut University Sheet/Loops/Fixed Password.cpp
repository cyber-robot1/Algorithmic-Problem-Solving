#include <iostream>
using namespace std;

int main()
{
  
	long long X;
	for (int i = 1; i > 0; i++)   // infinite loop
	{
		cin >> X;
		if (X == 1999)
		{
			cout << "Correct" << endl;
			break;
		}
		else
			cout << "Wrong" << endl;
	}

    return 0;
}
