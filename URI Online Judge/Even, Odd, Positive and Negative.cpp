#include <iostream>
using namespace std;
 
int main() {
 
        int A = 0, B = 0, C = 0, D = 0;
	int N;
	for (int k = 1; k <= 5; k++)
	{
		cin >> N;
		if (N % 2 == 0)
		{
			A++;
		}
		if (N % 2 != 0)
		{
			B++;
		}
		if (N > 0)
		{
			C++;
		}
		if (N < 0)
		{
			D++;
		}
	}

	cout << A << " valor(es) par(es)" << endl;
	cout << B << " valor(es) impar(es)" << endl;
	cout << C << " valor(es) positivo(s)" << endl;
	cout << D << " valor(es) negativo(s)" << endl;
    
   return 0;
}