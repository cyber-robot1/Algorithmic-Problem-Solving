#include <iostream>
#include<iomanip> 
using namespace std;
 
int main() {
 
    	int X, Y;
	float T;
	cin >> X >> Y;
	switch (X)
	{
	case 1:
		T = 4.00 * Y;
		cout << fixed << setprecision(2) << "Total: R$ " << T << endl;
		break;
	case 2:
		T = 4.50 * Y;
		cout << fixed << setprecision(2) << "Total: R$ " << T << endl;
		break;
	case 3:
		T = 5.00 * Y;
		cout << fixed << setprecision(2) << "Total: R$ " << T << endl;
		break;
	case 4:
		T = 2.00 * Y;
		cout << fixed << setprecision(2) << "Total: R$ " << T << endl;
		break;
	case 5:
		T = 1.50 * Y;
		cout << fixed << setprecision(2) << "Total: R$ " << T << endl;
		break;
	}
 
    return 0;
}