#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
 
int main() {
 
        float A, B, C, R1, R2, M, N;
	cin >> A >> B >> C;
	M = pow(B, 2) - (4 * A * C);
	N = sqrt(M);
	if (M >= 0 && A != 0) {
		
		R1 = (-B + N) / (2 * A);
		R2 = (-B - N) / (2 * A);
		cout << fixed << setprecision(5) << "R1 = " << R1 << endl;
		cout << fixed << setprecision(5) << "R2 = " << R2 << endl;
	}
	else if (M < 0 || A == 0) {
		cout << "Impossivel calcular" << endl;
	}
 
    return 0;
}