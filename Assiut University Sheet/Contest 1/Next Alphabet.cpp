#include <iostream>
using namespace std;
int main()
{
	char C, D;
	cin >> C;
	D = int(C) + 1;        // adding 1 to the ASCII value of the given character
	if (int(C) == 122)
		cout << 'a' << endl;
	else
		cout << D << endl;
}
