#include <iostream>
using namespace std;
 
int main() {
 
        int N;
	cin >> N;
	for (int k = 1; k <= N; k++)
	{
		if (k % 2 == 0)
		{
			cout << k << "^" << 2 << " = " << k * k << endl;
		}
	}
 
    return 0;
}