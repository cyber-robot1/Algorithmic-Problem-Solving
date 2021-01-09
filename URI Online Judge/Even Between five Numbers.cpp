#include <iostream>
using namespace std;
 
int main() {
 
        int A = 0;
	int N;
	for (int k = 1; k <= 5; k++)
	{
		cin >> N;
		if (N % 2 == 0)
		{
			A++;
		}
	}
	cout << A << " valores pares" << endl;
 
    return 0;
}