#include <iostream>
using namespace std;
 
int main() {
 
        int N;  //Input_variables
	int R1, R2, R3, R4, R5, R6, R7;   //Output_variables
	int X, Y, Z, A, B, C;   
	cin >> N; 
	R1 = N / 100;
	X = N - (R1 * 100);
	R2 = X / 50;
	Y = X - (R2 * 50);
	R3 = Y / 20;
	Z = Y - (R3 * 20);
	R4 = Z / 10;
	A = Z - (R4 * 10);
	R5 = A / 5;
	B = A - (R5 * 5);
	R6 = B / 2;
	C = B - (R6 * 2);
	R7 = C / 1;
	cout << N << endl;
	cout << R1 << " nota(s) de R$ 100,00" << endl;
	cout << R2 << " nota(s) de R$ 50,00" << endl;
	cout << R3 << " nota(s) de R$ 20,00" << endl;
	cout << R4 << " nota(s) de R$ 10,00" << endl;
	cout << R5 << " nota(s) de R$ 5,00" << endl;
	cout << R6 << " nota(s) de R$ 2,00" << endl;
	cout << R7 << " nota(s) de R$ 1,00" << endl; 
 
    return 0;
}