/*
Author: Karim Tarek Ibrahim
*/

#include <iostream>
using namespace std;

int A[20];
int B[20];

int main()
{
    for (int i = 0; i <= 19; i++)
        cin >> A[i];

	for (int i = 19, j = 0; i >= 0; i--, j++)
	{
		B[j] = A[i];
	}

	for (int i = 0; i <= 19; i++)
		cout << "N[" << i << "]" << " = " << B[i] << endl;

	
	return 0;
}
