#include <iostream>
#include<iomanip>
using namespace std;
 
int main() {
 
   	  int A, B, C, D;
	  float X, Y, Z;
	  cin >> A >> B >> X;
	  cin >> C >> D >> Y;
	  Z = (B * X) + (D * Y);
	  cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << Z << endl;


 
    return 0;
}
