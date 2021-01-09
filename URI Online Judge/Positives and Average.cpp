#include <iostream>
#include<iomanip> 
using namespace std;
 
int main() {
 
        int A = 0;
	float B = 0;
	float N;
	for (int k = 1; k <= 6; k++)
	{
		cin >> N;
		if (N > 0) {
			A++;
			B = B + N;
		}
	}
	cout << A << " valores positivos" << endl;
	cout << fixed << setprecision(1) << B / A << endl;
 
    return 0;
}